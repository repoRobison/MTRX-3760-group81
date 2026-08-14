// CRobotController.h
// Controller that updates and reports a collection of robot subsystems.

#ifndef CROBOTCONTROLLER_H
#define CROBOTCONTROLLER_H

#include "CSubsystem.h"

// CRobotController manages subsystems only through the CSubsystem interface.
class CRobotController
{
  public:
    // Creates an empty controller before its first cycle.
    CRobotController();

    // AddSubsystem registers one subsystem and reports whether it was accepted.
    bool AddSubsystem( CSubsystem* apSubsystem );

    // RunCycle updates and reports every registered subsystem.
    void RunCycle();

  private:
    static const int MaxSubsystems = 10;

    CSubsystem* mpSubsystems[MaxSubsystems];
    int mNumSubsystems;
    int mCycle;
};

#endif
