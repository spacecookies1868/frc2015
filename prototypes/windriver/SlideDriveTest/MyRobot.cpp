#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotDrive class.
 * The SampleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 *
 * WARNING: While it may look like a good choice to use for your code if you're inexperienced,
 * don't. Unless you know what you are doing, complex code will be much more difficult under
 * this system. Use IterativeRobot or Command-Based instead if you're new.
 */
class Robot: public SimpleRobot {
	const static int frontLeftChannel = 2;
	const static int rearLeftChannel = 3;
	const static int frontRightChannel = 1;
	const static int rearRightChannel = 0;

	const static int sideDriveChannel = 4;

	const static int leftJoystickChannel = 0;
	const static int rightJoystickChannel = 1;

	const static int switchDriveButtonPort = 0;

	RobotDrive* myRobot; // robot drive system
	Joystick* leftStick; // only joystick
	Joystick* rightStick;
	JoystickButton* switchDriveButton;
	Talon* sideDriveMotor;
	bool isWestCoast;
	bool isSideDrive;

public:
	Robot() {
		myRobot = new RobotDrive(frontLeftChannel, rearLeftChannel,
					frontRightChannel, rearRightChannel);
		leftStick = new Joystick(leftJoystickChannel);
		rightStick =  new  Joystick(rightJoystickChannel);
		switchDriveButton = new JoystickButton(leftStick, switchDriveButtonPort);
		sideDriveMotor = new Talon(sideDriveChannel);
		myRobot->SetExpiration(0.1);
		myRobot->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);	// invert the left side motors
		myRobot->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	}

	/**
	 * Runs the motors with arcade steering.
	 */
	void OperatorControl()
	{
		while (IsOperatorControl() && IsEnabled())
		{
			isSideDrive = switchDriveButton->Get();
			isWestCoast = !isSideDrive;
			if (isWestCoast) {
				myRobot->ArcadeDrive(leftStick, leftStick->kDefaultYAxis, rightStick, rightStick->kDefaultXAxis, true); // drive with arcade style (use right stick)
				Wait(0.005);					// wait for a motor update time
			} else {
				sideDriveMotor->Set(rightStick->GetY());
				Wait(0.005);
			}
		}
	}

};

START_ROBOT_CLASS(Robot);
