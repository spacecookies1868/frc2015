#include "WPILib.h"
#include "PIDControlLoop.h"

class Robot: public IterativeRobot
{
	LiveWindow *lw;
	Preferences* prefs;

	Encoder* rightEnc;
	Encoder* leftEnc;

	Talon* backRightMotor;
	Talon* frontRightMotor;
	Talon* backLeftMotor;
	Talon* frontLeftMotor;

	PIDConfig* rightConfig;
	PIDControlLoop* rightPid;
	PIDConfig* leftConfig;
	PIDControlLoop* leftPid;

	double rightMotorSpeed;
	double leftMotorSpeed;
	double PI;

public:
	Robot() {
		lw = LiveWindow::GetInstance();
		prefs = Preferences::GetInstance();

		PI = 3.1415926;

		leftEnc = new Encoder(0, 1, true);
		leftEnc->Reset();
		leftEnc->SetDistancePerPulse((PI / 2) / 256);
		rightEnc = new Encoder(2, 3);
		rightEnc->Reset();
		rightEnc->SetDistancePerPulse((PI / 2) / 256);

		backRightMotor = new Talon(0);
		frontRightMotor = new Talon(1);
		backLeftMotor = new Talon(3);
		frontLeftMotor = new Talon(4);

		rightMotorSpeed = 0.0;
		leftMotorSpeed = 0.0;

		rightConfig = new PIDConfig();
		rightConfig->pFac = 1.16;
		rightConfig->iFac = 0.0;
		rightConfig->dFac = 5.0;
		rightConfig->maxAbsOutput = 0.7;

		leftConfig = new PIDConfig();
		leftConfig->pFac = 1.16;
		leftConfig->iFac = 0;
		leftConfig->dFac = 5.0;
		leftConfig->outputValuesForTuning = true;
		leftConfig->maxAbsOutput = 0.7;

		rightPid = new PIDControlLoop(rightConfig);
		leftPid = new PIDControlLoop(leftConfig);
	}

	virtual ~Robot() {

	}

private:
	void RobotInit()
	{
		lw = LiveWindow::GetInstance();
		SmartDashboard::init();
	}

	void AutonomousInit()
	{

	}

	void AutonomousPeriodic()
	{

	}

	void TeleopInit()
	{
		rightEnc->Reset();
		leftEnc->Reset();
		rightPid->Init(rightEnc->GetDistance(), rightEnc->GetDistance() + 20);
		leftPid->Init(leftEnc->GetDistance(), leftEnc->GetDistance() + 20);
	}

	void TeleopPeriodic()
	{
		SmartDashboard::PutNumber("Right Encoder Value: ", rightEnc->GetDistance());
		SmartDashboard::PutNumber("Left Encoder Value: ", leftEnc->GetDistance());
		rightConfig->pFac = prefs->GetDouble("rightPFac", 0.58);
		rightConfig->iFac = prefs->GetDouble("rightIFac", 0.0007);
		rightConfig->dFac = prefs->GetDouble("rightDFac", 11.5);
		leftConfig->pFac = prefs->GetDouble("leftPFac", 0.58);
		leftConfig->iFac = prefs->GetDouble("leftIFac", 0.0007);
		leftConfig->dFac = prefs->GetDouble("leftDFac", 11.5);

		rightMotorSpeed = rightPid->Update(rightEnc->GetDistance());
		leftMotorSpeed = -leftPid->Update(leftEnc->GetDistance());

		backRightMotor->SetSpeed(rightMotorSpeed);
		frontRightMotor->SetSpeed(rightMotorSpeed);
		backLeftMotor->SetSpeed(leftMotorSpeed);
		frontLeftMotor->SetSpeed(leftMotorSpeed);
	}

	void TestPeriodic()
	{
		lw->Run();
	}

};

START_ROBOT_CLASS(Robot);
