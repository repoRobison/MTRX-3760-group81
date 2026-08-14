// main.cpp
// Demonstrates a controller running different robot subsystem types.

#include "CDriveMotor.h"
#include "CLineDetector.h"
#include "CRobotController.h"

int main()
{
  CDriveMotor driveMotor( "Drive motor" );
  driveMotor.SetTargetSpeed( 60 );

  CLineDetector lineDetector( "Line detector" );

  CRobotController controller;
  controller.AddSubsystem( &driveMotor );
  controller.AddSubsystem( &lineDetector );

  const int NumCycles = 4;
  for( int i = 0; i < NumCycles; ++i )
  {
    controller.RunCycle();
  }

  return 0;
}
