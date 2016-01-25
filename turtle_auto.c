#pragma config(Motor,  motor1,   leftDrive,   tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor6,   rightDrive,  tmotorVexIQ, openLoop, reversed, encoder)
#pragma config(Motor,  motor5,   dumpMotor,   tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor4,   forkLift,    tmotorVexIQ, openLoop, encoder)


void forward(int time){
	setMotorSpeed(leftDrive, 50);
	setMotorSpeed(rightDrive, 50);
	sleep(time);
}

void turnLeft(int time) {
	setMotorSpeed(leftDrive, -50);
	setMotorSpeed(rightDrive, 50);
	sleep(time);
}


task main(){
	forward(2000);
	turnLeft(1300);
	forward(5000);
}
