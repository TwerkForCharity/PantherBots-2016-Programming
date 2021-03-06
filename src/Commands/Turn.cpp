// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Turn.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Turn::Turn(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void Turn::Initialize() {
	//initializes variables
	position = Robot::drivetrain->GetDirection();
	turnAng = Robot::drivetrain->TurnAngle();
}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute()
{
	//calls function and passes it the variables as parameters
	Robot::drivetrain->TurnFun(position, turnAng);
}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished() {
	//calls function GetPos()
    	return Robot::drivetrain->GetPos();
}

// Called once after isFinished returns true
void Turn::End() {
	//waits half a second and then stops the robot
	Wait(.500);
	Robot::drivetrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted() {
	End(); //safety measure
}
