#include "WPILib.h"
//#include "PIDControlLoop.h"
#include "ini.h"

/**
 * This is a demo program showing how to use Mecanum control with the RobotDrive class.
 */
class Robot: public SimpleRobot
{
	enum autoStates{ kAutoForward, kAutoTurn, kAutoSideDrive};
    // Channels for the wheels
    const static int frontLeftChannel	= 6;
    const static int rearLeftChannel	= 7;
    const static int frontRightChannel	= 9;
    const static int rearRightChannel	= 8;

    const static int leftJoystickChannel	= 1;
    const static int rightJoystickChannel	= 2;
    
    const static int forwardButtonPort = 3;
    const static int backwardButtonPort = 2;
    const static int rightButtonPort = 5;
    const static int leftButtonPort = 4;
    
    const static int gyroPort = 1;
    
    const static float tolerance = 0.1;
    
    double motorSpeed;
    
    bool driveForwardDone;
    bool turningDone;
    bool driveSideDone;

	RobotDrive* robotDrive;	// robot drive system
	Joystick* leftStick;			// only joystick
	Joystick* rightStick;
	
	JoystickButton* forwardButton;
	JoystickButton* backwardButton;
	JoystickButton* leftButton;
	JoystickButton* rightButton;
	
	Talon* frontLeftMotor;
	Talon* rearLeftMotor;
	Talon* frontRightMotor;
	Talon* rearRightMotor;
	
	Encoder* frontLeftEncoder;
	Encoder* rearLeftEncoder;
	Encoder* frontRightEncoder;
	Encoder* rearRightEncoder;
	
	Gyro* gyro;
	
	Ini* pini;
	
	Timer* timerForward;
	int forwardCounter;
	
	Timer* timerSide;
	int sideCounter;
	
	int turnCounter;
	double dfStraightenValue;
	double rotateValue;
	double initialAngle;
	double dsStraightenValue;
#if 0	
	PIDConfig* driveForwardPIDConfig;
	PIDConfig* turningPIDConfig;
	PIDConfig* driveSidePIDConfig;
	
	PIDControlLoop* dfPID;
	
	PIDControlLoop* tPID;
	
	PIDControlLoop* dsPID;
	
#endif
public:
	Robot() { //:
			//robotDrive(frontLeftChannel, rearLeftChannel,
					   //frontRightChannel, rearRightChannel)	// these must be initialized in the same order
			// as they are declared above.
	
		leftStick = new Joystick(leftJoystickChannel);
		rightStick = new Joystick(rightJoystickChannel);
		/*
		 * Creating talons for auto so we can control individual motors for
		 * drive (mimicking robotDrive but with our own motor control)
		 * Should (hopefully) not interfere with robotDrive Mecanum in teleop
		 */
		frontLeftMotor = new Talon(frontLeftChannel);
		rearLeftMotor = new Talon(rearLeftChannel);
		frontRightMotor = new Talon(frontRightChannel);
		rearRightMotor = new Talon(rearRightChannel);
		
		motorSpeed = 0.2;
		
		robotDrive = new RobotDrive(frontLeftMotor, rearLeftMotor, frontRightMotor, rearRightMotor);
		/*
		 * Gyro to get turning and driveStraight values
		 * Ini to easily change and test P,I,D Facs and other PID stuff
		 */
		gyro = new Gyro(gyroPort);
		
		pini = new Ini("/robot.ini");
		
		forwardButton = new JoystickButton(leftStick, forwardButtonPort);
		backwardButton = new JoystickButton(leftStick, backwardButtonPort);
		leftButton = new JoystickButton(leftStick, leftButtonPort);
		rightButton = new JoystickButton(leftStick, rightButtonPort);
		/*
		 * booleans to test when an autoCommand is done
		 */
		driveForwardDone = false;
		turningDone = false;
		driveSideDone = false;
		
		robotDrive->SetExpiration(0.1);
		robotDrive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);	// invert the left side motors
		robotDrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);	// you may need to change or remove this to match your robot
		
		/*
		 * creating PIDs for the commands Phil asked for
		 * taking values from ini file
		 */
		/*
		driveForwardPIDConfig = new PIDConfig();
		driveForwardPIDConfig->pFac = pini->getf("DRIVEPID", "PFAC", 0.02);
		driveForwardPIDConfig->iFac = 0.0;
		driveForwardPIDConfig->dFac = 0.0;
		driveForwardPIDConfig->desiredAccuracy = 0.1;
		*/
		//finish PIDConfigs ini values
		/*
		 * timers for drive by time
		 */
		
		timerForward = new Timer();
		forwardCounter = 0;
		//dfPID = new PIDControlLoop(driveForwardPIDConfig);
		
		
		/*
		 * variable to store the driveStraight modification value
		 */
		
		dfStraightenValue = 0.0;
		
		
		//turningPIDConfig = new PIDConfig();
		//tPID = new PIDControlLoop(turningPIDConfig);
		/*
		turnCounter = 0;
		rotateValue = 0.0;
		initialAngle = 0.0;
		*/
		
		//driveSidePIDConfig = new PIDConfig();
		//dsPID = new PIDControlLoop(driveSidePIDConfig);
		/*
		
		timerSide = new Timer();
		sideCounter = 0;
		dsStraightenValue = 0.0;
		*/
		
		
		
	}
	
	float absolute(float myNum) {
		if (myNum < 0) {
			return -myNum;
		} else {
			return myNum;
		}
	}
	
	void Autonomous() {
		robotDrive->SetSafetyEnabled(true);
		while (IsAutonomous() && IsEnabled()) {
			
			
			 /*
			 * Drive forward by time
			 * Turn 90 degrees
			 * Drive sideways by time
			 */
			/*
			 * So, the purpose of this is so no more than one method happens
			 * at once. Ex: in order for driveSide to occur, both driveForwardDone
			 * and turningDone must be true and these variables are only set
			 * to true in the correlating commands. When everything is done, all
			 * motors are set to 0 so the robot stops moving
			 */
			
			if (!driveForwardDone) {
				DriveForward(5);
				printf("Driving Forward");
			} else if (!turningDone) {
				printf("Turning");
				TurnDegrees(90);
			} else if (!driveSideDone) {
				printf("Driving Side");
				DriveSide(5);
			} else {
				//printf("stopping");
				frontLeftMotor->Set(0.0);
				rearLeftMotor->Set(0.0);
				frontRightMotor->Set(0.0);
				rearRightMotor->Set(0.0);
			}
			
			
			
		}
	}
	
	void DriveForward(double myTimeLength) {
		/*
		 * First time around need to initialize the PIDControlLoop
		 * should only occur once
		 */
		
		if (forwardCounter < 1) {
			timerForward->Start();
			// dfPID->Init(gyro->GetAngle(), gyro->GetAngle());
			forwardCounter++;
		}
		printf("Timer Value %f\n:", timerForward->Get());
	
		/*
		 * I vectored stuff and RobotDrive (from WPILib) checked things to 
		 * figure out the basic drive straight stuff. It should produce the
		 * desired translation with a drivestraight from my driving experience
		 * with the mecanum today. 
		 */
		
		if (timerForward->Get() < myTimeLength) {
			//dfStraightenValue = dfPID->Update(gyro->GetAngle());
			//I don't know which way this is positive or negative
			dfStraightenValue = 0.0;
			printf("MotorSpeed: %f\n", motorSpeed);
			printf("straighten value: %f\n", dfStraightenValue);
			frontLeftMotor->Set(-motorSpeed - dfStraightenValue);
			rearLeftMotor->Set(-motorSpeed - dfStraightenValue);
			frontRightMotor->Set(motorSpeed - dfStraightenValue);
			rearRightMotor->Set(motorSpeed - dfStraightenValue);
		} else {
			driveForwardDone = true;
			printf("Driving Done");
		}
		
		
	}
	void TurnDegrees(double myDegrees) {
		/*
		 * First time around need to initialize the PIDControlLoop
		 * should only occur once
		 */
		/*
		if (turnCounter < 1)  {
			//tPID->Init(gyro->GetAngle(), gyro->GetAngle() + myDegrees);
			initialAngle = gyro->GetAngle();
			turnCounter++;
		}
		*/
		/*
		 * I vectored stuff and joystick test memory and RobotDrive 
		 * (from WPILib) checked things to figure out the turning motor changes.
		 * Doing the negating the way PivotCommand does should work since its
		 * what happens when the rightstick in teleop is pushed to the side and 
		 * the leftstick has no input.
		 */
		/*
		if (!(tPID->ControlLoopDone(gyro->GetAngle()))) {
			//rotateValue = tPID->Update(gyro->GetAngle());
			rotateValue = 0.3;
			frontLeftMotor->Set(rotateValue);
			rearLeftMotor->Set(rotateValue);
			frontRightMotor->Set(-rotateValue);
			rearRightMotor->Set(-rotateValue);
		} else {
			turningDone = true;
		}
		*/
		/*
		if (gyro->GetAngle() - initialAngle >= 90) {
			turningDone = true;
		} else {
			rotateValue = 0.3;
			frontLeftMotor->Set(rotateValue);
			rearLeftMotor->Set(rotateValue);
			frontRightMotor->Set(-rotateValue);
			rearRightMotor->Set(-rotateValue);
		}
		*/
		turningDone = true;
		
	}
	void DriveSide(double myTime) {
		/*
		 * First time around need to initialize the PIDControlLoop
		 * should only occur once
		 */
		/*
		if (sideCounter < 1) {
			timerSide->Start();
			//dsPID->Init(gyro->GetAngle(), gyro->GetAngle());
			sideCounter++;
		}
		*/
		/*
		 * Vector stuff and WPILib reference to figure out vectors
		 */
		/*
		if (timerSide->Get() < myTime) {
			//dsStraightenValue = dsPID->Update(gyro->GetAngle());
			frontLeftMotor->Set(motorSpeed + dsStraightenValue);
			rearLeftMotor->Set(-motorSpeed - dsStraightenValue);
			frontRightMotor->Set(-motorSpeed + dsStraightenValue);
			rearRightMotor->Set(motorSpeed - dsStraightenValue);
		} else {
			driveSideDone = true;
		}
		*/
		driveSideDone = true;
	}
	/**
	 * Runs the motors with Mecanum drive.
	 */
	void OperatorControl()
	{
		robotDrive->SetSafetyEnabled(false);
		while (IsOperatorControl() && IsEnabled())
		{
        	/*
        	 * leftJoy forward == robot forward
        	 * leftJoy sideways == robot side
        	 * rightJoy sideways == robot twist
        	 */
        	// This sample does not use field-oriented drive, so the gyro input is set to zero.
			float sideVal = leftStick->GetX();
			float forwardVal = leftStick->GetY();
			float turnVal = rightStick->GetX();
			
			if (absolute(sideVal) < tolerance) {
				sideVal = 0.0;
			}
			if (absolute(forwardVal) < tolerance) {
				forwardVal = 0.0;
			}
			if (absolute(turnVal) < tolerance) {
				turnVal = 0.0;
			}
			
			if (forwardButton->Get() || backwardButton->Get()) {
				sideVal = 0.0;
				turnVal = 0.0;
			}
			
			if (leftButton->Get() || rightButton->Get()) {
				forwardVal = 0.0;
				turnVal = 0.0;
			}
			
			robotDrive->MecanumDrive_Cartesian(sideVal, forwardVal, turnVal);

			Wait(0.005); // wait 5ms to avoid hogging CPU cycles
		}
	}
	

};

START_ROBOT_CLASS(Robot);
