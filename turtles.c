#pragma config(Motor,  motor1,          rightMotor,    tmotorVexIQ, openLoop, driveRight, encoder)
#pragma config(Motor,  motor6,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)

task main() {
  waitUntil (getJoystickValue(BtnEUp) == 1);
  	resetTimer (T1);
  	repeatUntil (getTimer(T1, seconds) >= 60) {
  if (getJoystickValue(BtnFup) == 1);
  	setMultipleMotors (-100, rightMotor, leftMotor);
	} else {

