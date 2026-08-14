CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic
COMMON_SOURCES = CSubsystem.cpp CDriveMotor.cpp CLineDetector.cpp CRobotController.cpp

all: robot_controller tests

robot_controller: main.cpp $(COMMON_SOURCES)
	$(CXX) $(CXXFLAGS) main.cpp $(COMMON_SOURCES) -o robot_controller

tests: tests.cpp $(COMMON_SOURCES)
	$(CXX) $(CXXFLAGS) tests.cpp $(COMMON_SOURCES) -o tests

clean:
	rm -f robot_controller tests
