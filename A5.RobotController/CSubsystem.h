// CSubsystem.h
// Common interface for all robot subsystems.

#ifndef CSUBSYSTEM_H
#define CSUBSYSTEM_H

#include <string>

// CSubsystem shows what every subsystem needs to provide.
class CSubsystem
{
  public:
    // Creates a subsystem with the given name.
    CSubsystem( const std::string& aName );

    // Allows subclasses to be deleted safely through CSubsystem pointers.
    virtual ~CSubsystem();

    // Updates the subsystem for one cycle.
    virtual void Update() = 0;

    // Prints the current state of the subsystem.
    virtual void Report() = 0;

    // Gets the subsystem name.
    const std::string& GetName();

  private:
    std::string mName;
};

#endif