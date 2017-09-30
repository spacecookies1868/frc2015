#include "WPILib.h"
#include "ButtonReader.h"
#include "ini.h"
#include "minGlue.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The IterativeRobot class is the base of a robot application that will automatically call your
 * Periodic methods for each packet based on the mode.
 */ 
class ClampBase : public IterativeRobot
{
	Ini* pini;
	
	Joystick* stick; // only joystick
	Solenoid* pistonClamp;
	ButtonReader* openClamp;
	
	int num;

public:
	ClampBase(){
		stick = new Joystick(3);
		pistonClamp = new Solenoid(1);
		openClamp = new ButtonReader(stick, 6);
		this->SetPeriod(0); 	//Set update period to sync with robot control packets (20ms nominal)
	}
	
/**
 * Robot-wide initialization code should go here.
 * 
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
void ClampBase::RobotInit() {
}

/**
 * Initialization code for disabled mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode. 
 */
void ClampBase::DisabledInit() {
}

/**
 * Periodic code for disabled mode should go here.
 * 
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in disabled mode.
 */
void ClampBase::DisabledPeriodic() {
}

/**
 * Initialization code for autonomous mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters autonomous mode.
 */
void ClampBase::AutonomousInit() {
}

/**
 * Periodic code for autonomous mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in autonomous mode.
 */
void ClampBase::AutonomousPeriodic() {
}

/**
 * Initialization code for teleop mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters teleop mode.
 */
void ClampBase::TeleopInit() {
	delete pini;
	pini = new Ini("/robot.ini");
	
	num = pini->geti("PROTOTYPING", "num", 2);
	printf("There are %d people in the lab.\n", num);
}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void ClampBase::TeleopPeriodic() {
	if (openClamp->IsDown()){
		pistonClamp->Set(true);
	} else {
		pistonClamp->Set(false);
	}
}

/**
 * Initialization code for test mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void ClampBase::TestInit() {
}

/**
 * Periodic code for test mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in test mode.
 */
void ClampBase::TestPeriodic() {
}

};

START_ROBOT_CLASS(ClampBase);

