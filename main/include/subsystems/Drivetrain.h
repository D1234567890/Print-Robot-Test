/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>

class Drivetrain : public frc::Subsystem {
 private:
  double leftPower;
  double rightPower;

 public:

  Drivetrain();
  void InitDefaultCommand() override;
  void tankDrive(double leftInput, double rightInput);
};
