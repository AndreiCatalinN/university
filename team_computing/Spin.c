#pragma config(Motor,  motorB,          leftMotor,     tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
		// Stop for 1 second
	motor[leftMotor] = 0;			//Set the leftMotor (motor1) to Off
	motor[rightMotor] = 50;   	//Set the rightMotor (motor6) to half power forward (50)
	sleep(3320);											//Wait for 1 second before continuing on in the program.
}