#pragma config(Motor,  motor1,   leftDrive,   tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor6,   rightDrive,  tmotorVexIQ, openLoop, reversed, encoder)
#pragma config(Motor,  motor5,   dumpMotor,   tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor4,   forkLift,    tmotorVexIQ, openLoop, encoder)

task main()
{
	int threshold = 10;
	while(true)
	{
		//If the ChannelA (left Y-Axis) is greater than the threshold value,
		//then we'll set the speed of the motor to vlaue from the joystick.
		if(getJoystickValue(ChA) > threshold || getJoystickValue(ChA) < -threshold)
		{
			setMotorSpeed(leftDrive, getJoystickValue(ChA));
		}
		else  //If less than the threshold, we'll set the motor to zero.
		{
			setMotorSpeed(leftDrive, 0);
		}

		//If the ChannelD (right Y-Axis) is greater than the threshold value,
		//then we'll set the speed of the motor to vlaue from the joystick.
		if(getJoystickValue(ChD) > threshold || getJoystickValue(ChD) < -threshold)
		{
			setMotorSpeed(rightDrive, getJoystickValue(ChD));
		}
		else  //If less than the threshold, we'll set the motor to zero.
		{
			setMotorSpeed(rightDrive, 0);
		}

		//If Button "L-Up" is pressed in, we'll set the arm motor to run in reverse.
		if(getJoystickValue(BtnLUp) == 1)
		{
			setMotorSpeed(dumpMotor, -20);
		}
		//If the "L-Up" isn't pressed, but "L-Down" is, we'll set the motor to run forward.
		else if(getJoystickValue(BtnLDown) == 1)
		{
			setMotorSpeed(dumpMotor, 40);
		}
		else  //If neither button is pressed, we'll set the motor off.
		{
			setMotorSpeed(dumpMotor, 0);
		}

		////If Button "L-Up" is pressed in, we'll set the arm motor to run in reverse.
		if(getJoystickValue(BtnRUp) == 1)
		{
			setMotorSpeed(forkLift, 127);
		}
		////If the "L-Up" isn't pressed, but "L-Down" is, we'll set the motor to run forward.
		else if(getJoystickValue(BtnRDown) == 1)
		{
			setMotorSpeed(forkLift, -127);
		}
		else	//If neither button is pressed, we'll set the motor off.
		{
			setMotorSpeed(forkLift, 0);
		}
	}
}
