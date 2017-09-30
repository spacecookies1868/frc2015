#include "WPILib.h"
#include "ButtonReader.h"
#include "ini.h"
#include "minGlue.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The IterativeRobot class is the base of a robot application that will automatically call your
 * Periodic methods for each packet based on the mode.
 */ 
class RollerPrototype : public IterativeRobot
{
	// Everything to do with the clamping mechanism has been commented out
	
	Ini *pini;
	
	double rollerMotorSpeed;
	double clampingMotorSpeed;
	
	Joystick* stick; // only joystick
	ButtonReader* rollerIn;
	ButtonReader* rollerOut;
	/*ButtonReader* clampClose;
	ButtonReader* clampOpen;*/
	
	Talon* leftRollerMotor;
	
	Talon* rightRollerMotor;
	/*Talon* leftClampMotor;
	Talon* rightClampMotor;
	DigitalInput* limitSwitch;*/
	
	uint32_t leftRollerPort;
	uint32_t rightRollerPort;

public:
	RollerPrototype(void) {
		pini = new Ini("/robot.ini");
		
		leftRollerPort = 9;
		rightRollerPort = 8;
		
		rollerMotorSpeed = 0.0;
		clampingMotorSpeed = 0.0;
		
		stick = new Joystick(3);
		rollerIn = new ButtonReader(stick, 4);
		rollerOut = new ButtonReader(stick, 3);
		/*clampClose = new ButtonReader(stick, 1);
		clampOpen = new ButtonReader(stick, 2);*/
		
		leftRollerMotor = new Talon(leftRollerPort);
		rightRollerMotor = new Talon(rightRollerPort);
		/*leftClampMotor = new Talon(3);
		rightClampMotor = new Talon(4);
		limitSwitch = new DigitalInput(8);*/
		this->SetPeriod(0); 	//Set update period to sync with robot control packets (20ms nominal)
	}
	
/**
 * Robot-wide initialization code should go here.
 * 
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
void RollerPrototype::RobotInit() {
}

/**
 * Initialization code for disabled mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode. 
 */
void RollerPrototype::DisabledInit() {
}

/**
 * Periodic code for disabled mode should go here.
 * 
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in disabled mode.
 */
void RollerPrototype::DisabledPeriodic() {
}

/**
 * Initialization code for autonomous mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters autonomous mode.
 */
void RollerPrototype::AutonomousInit() {
}

/**
 * Periodic code for autonomous mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in autonomous mode.
 */
void RollerPrototype::AutonomousPeriodic() {
}

/**
 * Initialization code for teleop mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters teleop mode.
 */
void RollerPrototype::TeleopInit() {
	delete pini;
	pini = new Ini("/robot.ini");
	rollerMotorSpeed = pini->getf("PROTOTYPING", "rollerMotorSpeed", 0.1);
	clampingMotorSpeed = pini->getf("PROTOTYPING", "clampingMotorSpeed", 0.1);
}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void RollerPrototype::TeleopPeriodic() {
	if(rollerIn->IsDown()) {
		leftRollerMotor->Set(rollerMotorSpeed);
		rightRollerMotor->Set(-rollerMotorSpeed);
	} else if(rollerOut->IsDown()){
		leftRollerMotor->Set(-rollerMotorSpeed);
		rightRollerMotor->Set(rollerMotorSpeed);
	}
	else{
		leftRollerMotor->Set(0);
		rightRollerMotor->Set(0);
	}
	/*if(limitSwitch->Get() == 1){
		leftClampMotor(clampingMotorSpeed);
		rightClampMotor(-clampingMotorSpeed);
	}
	else{
		leftClampMotor(0);
		rightClampMotor(0);
	}
	if(clampOpen->IsDown()){
		leftClampMotor(-clampingMotorSpeed);
		rightClampMotor(clampingMotorSpeed);
	}
	else{
		leftClampMotor(0);
		rightClampMotor(0);
	}*/
}

/**
 * Initialization code for test mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void RollerPrototype::TestInit() {
}

/**
 * Periodic code for test mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in test mode.
 */
void RollerPrototype::TestPeriodic() {
}

};

START_ROBOT_CLASS(RollerPrototype);
