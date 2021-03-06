// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ChangeWristPosition.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

ChangeWristPosition::ChangeWristPosition(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	SetTimeout(.3);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::wrist.get());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void ChangeWristPosition::Initialize() {

	//this finds out which position the wrist is in and changes it accordingly
	test = Robot::wrist->WristState;
		if(test == false)
		{
			Robot::wrist->UpWristState();
		}
		else if(test == true)
		{
			Robot::wrist->DownWristState();
		}
}

// Called repeatedly when this Command is scheduled to run
void ChangeWristPosition::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ChangeWristPosition::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void ChangeWristPosition::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChangeWristPosition::Interrupted() {

}
