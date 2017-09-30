#include "WPILib.h"
#include "opencv2/opencv.hpp"

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
class Robot: public SampleRobot
{
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick
	Gyro *gyro;

	AxisCamera *camera;
	IplImage *oldImg, *newImg;
	cv::Mat oldMat, newMat;

	int oldWidth, oldLength, newWidth;

	cv::Rect oldRoi, newRoi;

	double coords[];
	double desiredAccuracy;

public:
	Robot() :
			myRobot(0, 1),	// these must be initialized in the same order
			stick(0)		// as they are declared above.
	{
		myRobot.SetExpiration(0.1);
		gyro = new Gyro(1);
		camera = new AxisCamera("10.18.68.99");

		oldWidth = 500;
		oldLength = 300;
		newWidth = 100;

		oldRoi = Rect(0, 0, oldWidth, oldLength);
		newRoi = Rect(oldWidth/2 - newWidth, oldLength/2 - newWidth, newWidth, newWidth);

		coords[0] = 0.0;
		coords[1] = 0.0;

		desiredAccuracy = 10.0;
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */

	void rotate(cv::Mat& src, double angle, cv::Mat& dst)
	{
	    int len = std::max(src.cols, src.rows);
	    cv::Point2f pt(len/2., len/2.);
	    cv::Mat r = cv::getRotationMatrix2D(pt, angle, 1.0);

	    cv::warpAffine(src, dst, r, cv::Size(len, len));
	}

	void AutonomousInit()
	{

	}

	void AutonomousPeriodic() {

	}

	/**
	 * Runs the motors with arcade steering.
	 */
	void TeleopInit() {
		oldImg = new IplImage(camera->GetImage());
		newImg = new IplImage(camera->GetImage());
		oldMat = oldImg;
		newMat = newImg;

	}

	void TeleopPeriodic() {
		GetCoords();
		printf("x coord:%f\ty coord:%f\n",coords[0], coords[1]);
	}

	/*
	 * method description:
	 *
	 * camera gets img of ground, saves as oldImage
	 * gets newImage
	 * newImage is a cropped to a tiny area in the middle
	 * move newImage over every spot on oldImage
	 * compare the two using absIdff (?) or subtract
	 *
	 * if the difference btn newImage and the portion of oldImage it's compared to
	 * is close enough to 0, then find the index of where they matched (i, j)
	 * then you have traveled from the origin (0,0) to (i, j)
	 * and your x is i and your y is j
	 *
	 */

	void GetCoords() {
		oldImg = newImg;
		newImg = new IplImage(camera->GetImage());
		oldMat = oldImg;
		newMat = newImg;
		rotate(newMat, gyro->GetAngle(), newMat); // rotates newMat by the gyro angle and stores in dst
		newMat = newMat(newRoi);
		oldMat = oldMat(oldRoi); // crops the matrices to what we care about
		cv::Mat diff;
		cv::Mat croppedOld;
		cv::Mat croppedNew;
		cv::Rect tempRoi;
		/*
		 * the newMat is a 100x100 img about in the middle of the camera image
		 * the oldMat is basically the whole image
		 * either spiral out from the center of the image, comparing newMat and oldMat cropped
		 * to fit newMat's size
		 * or spiral from outside? depending on speed?
		 * or just line by line
		 */
		for (int i = 0; i < oldMat.cols - newWidth; i++) {
			for (int j = 0; j < oldMat.rows - newWidth; j++) {
				tempRoi = Rect(i, j, newWidth, newWidth); // takes the 100 x 100 subset of oldMat starting at (i,j)
				croppedOld = oldMat(tempRoi).clone();
				absdiff(oldMat, newMat, diff);
					if ((sum(diff) < desiredAccuracy) || (sum(diff) < -desiredAccuracy)) {
						coords[0] = i;
						coords[1] = j;
						break;
					}
			}
		}
	}
	/**
	 * Runs during test mode
	 */
	void Test()
	{
	}
};

START_ROBOT_CLASS(Robot);
