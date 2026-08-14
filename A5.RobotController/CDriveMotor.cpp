// CDriveMotor.cpp
// Implementation of the drive-motor subsystem.

#include "CDriveMotor.h"

#include <iostream>

CDriveMotor::CDriveMotor( const std::string& aName )
  : CSubsystem( aName ),
    mSpeed( 0 ),
    mTargetSpeed( 0 )
{
}

void CDriveMotor::SetTargetSpeed( int aTargetSpeed )
{
  if( aTargetSpeed < 0 )
  {
    mTargetSpeed = 0;
  }
  else if( aTargetSpeed > 100 )
  {
    mTargetSpeed = 100;
  }
  else
  {
    mTargetSpeed = aTargetSpeed;
  }
}

void CDriveMotor::Update()
{
  const int SpeedStep = 20;

  if( mSpeed < mTargetSpeed )
  {
    mSpeed += SpeedStep;

    if( mSpeed > mTargetSpeed )
    {
      mSpeed = mTargetSpeed;
    }
  }
  else if( mSpeed > mTargetSpeed )
  {
    mSpeed -= SpeedStep;

    if( mSpeed < mTargetSpeed )
    {
      mSpeed = mTargetSpeed;
    }
  }
}

void CDriveMotor::Report()
{
  std::cout << GetName() << ": speed " << mSpeed
            << ", target " << mTargetSpeed << std::endl;
}

int CDriveMotor::GetSpeed()
{
  return mSpeed;
}
