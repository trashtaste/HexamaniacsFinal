CC = g++
CFLAGS =
LFLAGS = -static -Wall
TARGET = main
OBJECTS = VacuumMerlinEngineFactory.o VacuumMerlinEngine.o testSimulation.o State3.o State2.o State1.o State.o\
 					StarlinkSatellite.o Stage.o SpaceShip.o simulation.o SatelliteCluster.o Satellite.o rocketPayload.o RocketFactory.o\
  				Rocket.o radioMessage.o payloadItems.o payload.o MerlinEngineFactory.o MerlinEngine.o Memento.o launchSimulation.o\
	 				laserMessage.o ISSObservationRoom.o ISS.o Ground.o FalconHeavyRocketFactory.o FalconHeavyRocket.o Falcon9RocketFactory.o\
	  			Falcon9Rocket.o EngineState.o EngineFactory.o Engine.o DragonSpacecraftFactory.o DragonSpacecraft.o DragonFactory.o\
		 			Dragon.o CrewDragonFactory.o CrewDragon.o Core.o Communicate.o Caretaker.o main.o

# Linking all the object code:
all: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $(TARGET)

# Dependencies:
Caretaker.o: Caretaker.h Caretaker.cpp
Communicate.o: Communicate.h Communicate.cpp
Core.o: Core.h Core.cpp
CrewDragon.o: CrewDragon.h CrewDragon.cpp
CrewDragonFactory.o: CrewDragonFactory.h CrewDragonFactory.cpp
Dragon.o: Dragon.h Dragon.cpp
DragonFactory.o: DragonFactory.h DragonFactory.cpp
DragonSpacecraft.o: DragonSpacecraft.h DragonSpacecraft.cpp
DragonSpacecraftFactory.o: DragonSpacecraftFactory.h DragonSpacecraftFactory.cpp
Engine.o: Engine.h Engine.cpp
EngineFactory.o: EngineFactory.h EngineFactory.cpp
EngineState.o: EngineState.h EngineState.cpp
Falcon9Rocket.o: Falcon9Rocket.h Falcon9Rocket.cpp
Falcon9RocketFactory.o: Falcon9RocketFactory.h Falcon9RocketFactory.cpp
FalconHeavyRocket.o: FalconHeavyRocket.h FalconHeavyRocket.cpp
FalconHeavyRocketFactory.o: FalconHeavyRocketFactory.h FalconHeavyRocketFactory.cpp
Ground.o: Ground.h Ground.cpp
ISS.o: ISS.h ISS.cpp
ISSObservationRoom.o: ISSObservationRoom.h ISSObservationRoom.cpp
laserMessage.o: laserMessage.h laserMessage.cpp
launchSimulation.o: launchSimulation.h launchSimulation.cpp
Memento.o: Memento.h Memento.cpp
MerlinEngine.o: MerlinEngine.h MerlinEngine.cpp
MerlinEngineFactory.o: MerlinEngineFactory.h MerlinEngineFactory.cpp
payload.o: payload.h payload.cpp
payloadItems.o: payloadItems.h payloadItems.cpp
radioMessage.o: radioMessage.h radioMessage.cpp
Rocket.o: Rocket.h Rocket.cpp
RocketFactory.o: RocketFactory.h RocketFactory.cpp
rocketPayload.o: rocketPayload.h rocketPayload.cpp
Satellite.o: Satellite.h Satellite.cpp
SatelliteCluster.o: SatelliteCluster.h SatelliteCluster.cpp
simulation.o: simulation.h simulation.cpp
SpaceShip.o: SpaceShip.h SpaceShip.cpp
Stage.o: Stage.h Stage.cpp
StarlinkSatellite.o: StarlinkSatellite.h StarlinkSatellite.cpp
State.o: State.h State.cpp
State1.o: State1.h State1.cpp
State2.o: State2.h State2.cpp
State3.o: State3.h State3.cpp
testSimulation.o: testSimulation.h testSimulation.cpp
VacuumMerlinEngine.o: VacuumMerlinEngine.h VacuumMerlinEngine.cpp
VacuumMerlinEngineFactory.o: VacuumMerlinEngineFactory.h VacuumMerlinEngineFactory.cpp

main.o: main.cpp

# Compilation rule:
%.o: %.cpp
	$(CC) \$< $(CFLAGS) -c -o $@

# Custom commands:
clean:
	rm -f *.o main # deleting executable, .o’s and backups
run:
	./$(TARGET) # executing the program
