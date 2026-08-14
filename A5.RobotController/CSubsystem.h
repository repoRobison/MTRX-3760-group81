// CSubsystem.h
// Common interface for every subsystem managed by the robot controller.

#ifndef CSUBSYSTEM_H
#define CSUBSYSTEM_H

#include <string>

// CSubsystem defines the operations every robot subsystem must provide.
class CSubsystem
{
  public:
    // Creates a subsystem with the given display name.
    CSubsystem( const std::string& aName );

    // Allows derived objects to be destroyed safely through a base pointer.
    virtual ~CSubsystem();

    // Update advances the subsystem by one controller cycle.
    virtual void Update() = 0;

    // Report prints the subsystem's current state.
    virtual void Report() = 0;

    // GetName returns the subsystem's display name.
    const std::string& GetName();

  private:
    std::string mName;
};

#endif
