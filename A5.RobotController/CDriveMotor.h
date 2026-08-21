// CDriveMotor.h
// Drive motor subsystem that keeps track of its current and target speed.

#ifndef CDRIVEMOTOR_H
#define CDRIVEMOTOR_H

#include "CSubsystem.h"

// CDriveMotor controls a drive motor and moves its speed towards a target.
class CDriveMotor : public CSubsystem
{
  public:
    // Starts the drive motor stopped.
    CDriveMotor( const std::string& aName );

    // Sets the target speed from 0 to 100.
    void SetTargetSpeed( int aTargetSpeed );

    // Moves the current speed towards the target.
    void Update();

    // Prints the current speed and target speed.
    void Report();

    // Gets the current motor speed.
    int GetSpeed();

  private:
    int mSpeed;
    int mTargetSpeed;
};

#endif