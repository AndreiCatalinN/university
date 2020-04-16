
#pragma config(Motor,  motorA,          LeftMotor,     tmotorEV3_Medium, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorD,          RightMotor,    tmotorEV3_Medium, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	//Straight and left
	setMotorSyncTime(motorA, motorD, 0, 2750, 50);
	sleep(2750);

	motor[RightMotor] = 50;			//Set the leftMotor (motor1) to half power forward (50)
	motor[LeftMotor] = -50;  	//Set the rightMotor (motor6) to half power forward (50)
	sleep(380);

	setMotorSyncTime(motorA, motorD, 0, 2750, 50);
	sleep(2750);

	if(rand()%2==1)
	{ //Going to opt2
		motor[RightMotor] = -50;			//Set the leftMotor (motor1) to half power forward (50)
		motor[LeftMotor] = 50;  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(380);

		setMotorSyncTime(motorA, motorD, 0, 1250, 50);
		sleep(1250);

		motor[RightMotor] = -50;			//Set the leftMotor (motor1) to half power forward (50)
		motor[LeftMotor] = 50;  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(400);

		setMotorSyncTime(motorA, motorD, 0, 1800, 50);
		sleep(1800);
	}
	else
	{//Going to opt3

		motor[RightMotor] = 50;			//Set the leftMotor (motor1) to half power forward (50)
		motor[LeftMotor] = -50;  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(420);

		setMotorSyncTime(motorA, motorD, 0, 2750, 50);
		sleep(2750);

		//setMotorSyncTime(motorA, motorD, 0, 1050, 50);
		//sleep(1050);

		motor[RightMotor] = 50;			//Set the leftMotor (motor1) to half power forward (50)
		motor[LeftMotor] = -50;  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(400);

		setMotorSyncTime(motorA, motorD, 0, 1600, 50);
		sleep(1600);

		motor[RightMotor] = 50;			//Set the leftMotor (motor1) to half power forward (50)
		motor[LeftMotor] = -50;  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(400);

		setMotorSyncTime(motorA, motorD, 0, 1300, 50);
		sleep(1300);

	}
}