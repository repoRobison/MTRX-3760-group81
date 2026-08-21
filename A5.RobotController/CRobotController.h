// CRobotController.h
// Robot controller that runs and reports the subsystems.

#ifndef CROBOTCONTROLLER_H
#define CROBOTCONTROLLER_H

#include "CSubsystem.h"

// CRobotController manages the subsystems through CSubsystem.
class CRobotController
{
  public:
    // Starts the controller with no subsystems.
    CRobotController();

    // Adds a subsystem to the controller.
    bool AddSubsystem( CSubsystem* apSubsystem );

    // Updates and reports all added subsystems.
    void RunCycle();

  private:
    static const int MaxSubsystems = 10;

    CSubsystem* mpSubsystems[MaxSubsystems];
    int mNumSubsystems;
    int mCycle;
};

#endif