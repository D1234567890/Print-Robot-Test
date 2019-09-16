/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Drivetrain.h"
#include <iostream>

Drivetrain::Drivetrain() : Subsystem("ExampleSubsystem") {

}

void Drivetrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void Drivetrain::tankDrive(double leftInput, double rightInput) {
  leftPower = leftInput;
  rightPower = rightInput;
  std::cout<<leftPower<<" "<<rightPower<<std::endl;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.