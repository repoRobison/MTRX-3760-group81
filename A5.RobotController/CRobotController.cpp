// CRobotController.cpp
// Implementation of the extensible robot controller.

#include "CRobotController.h"

#include <iostream>

CRobotController::CRobotController()
  : mNumSubsystems( 0 ),
    mCycle( 0 )
{
}

bool CRobotController::AddSubsystem( CSubsystem* apSubsystem )
{
  bool wasAdded = false;

  if( apSubsystem != 0 && mNumSubsystems < MaxSubsystems )
  {
    mpSubsystems[mNumSubsystems] = apSubsystem;
    ++mNumSubsystems;
    wasAdded = true;
  }

  return wasAdded;
}

void CRobotController::RunCycle()
{
  ++mCycle;
  std::cout << "Cycle " << mCycle << std::endl;

  for( int i = 0; i < mNumSubsystems; ++i )
  {
    mpSubsystems[i]->Update();
    mpSubsystems[i]->Report();
  }

  std::cout << std::endl;
}
