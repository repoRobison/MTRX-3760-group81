// tests.cpp
// Tests the motor, line detector, and robot controller.

#include "CDriveMotor.h"
#include "CLineDetector.h"
#include "CRobotController.h"

#include <cassert>
#include <iostream>

int main()
{
  CDriveMotor motor( "Test motor" );
  assert( motor.GetSpeed() == 0 );

  motor.SetTargetSpeed( 50 );
  motor.Update();
  assert( motor.GetSpeed() == 20 );
  motor.Update();
  motor.Update();
  assert( motor.GetSpeed() == 50 );

  motor.SetTargetSpeed( 120 );
  motor.Update();
  motor.Update();
  motor.Update();
  assert( motor.GetSpeed() == 100 );

  CLineDetector detector( "Test detector" );
  detector.Update();
  assert( detector.GetError() == 2 );
  detector.Update();
  assert( detector.GetError() == 1 );
  detector.Update();
  assert( detector.GetError() == -1 );

  CRobotController controller;
  assert( controller.AddSubsystem( &motor ) );
  assert( controller.AddSubsystem( &detector ) );
  assert( !controller.AddSubsystem( 0 ) );

  std::cout << "All A5 tests passed" << std::endl;
  return 0;
}
