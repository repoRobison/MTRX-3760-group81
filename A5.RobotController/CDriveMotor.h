// CDriveMotor.h
// Drive-motor subsystem with changing speed state.

#ifndef CDRIVEMOTOR_H
#define CDRIVEMOTOR_H

#include "CSubsystem.h"

// CDriveMotor is a subsystem that approaches a requested target speed.
class CDriveMotor : public CSubsystem
{
  public:
    // Creates a stopped drive motor.
    CDriveMotor( const std::string& aName );

    // SetTargetSpeed sets the requested speed from 0 to 100.
    void SetTargetSpeed( int aTargetSpeed );

    // Update moves the current speed towards the target by one step.
    void Update();

    // Report prints the current and target speeds.
    void Report();

    // GetSpeed supports verification of the motor state.
    int GetSpeed();

  private:
    int mSpeed;
    int mTargetSpeed;
};

#endif
