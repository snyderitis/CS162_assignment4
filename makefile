CC = g++
EXE = AntsVBees

$(EXE): colony.o ant.o harvester.o thrower.o fire.o short_thrower.o long_thrower.o wall.o ninja.o bodyguard.o bee.o space.o game.o driver.o useful_functions.o
	$(CC) -g -o $(EXE) colony.o ant.o harvester.o thrower.o fire.o short_thrower.o long_thrower.o wall.o ninja.o bodyguard.o bee.o space.o game.o driver.o useful_functions.o

colony.o: colony.cpp
	$(CC) -c colony.cpp

useful_functions.o: useful_functions.cpp
	$(CC) -c useful_functions.cpp

ant.o: ant.cpp
	$(CC) -c ant.cpp

harvester.o: ./ant_types/harvester.cpp
	$(CC) -c ./ant_types/harvester.cpp

thrower.o: ./ant_types/thrower.cpp
	$(CC) -c ./ant_types/thrower.cpp

short_thrower.o: ./ant_types/short_thrower.cpp
	$(CC) -c ./ant_types/short_thrower.cpp

long_thrower.o: ./ant_types/long_thrower.cpp
	$(CC) -c ./ant_types/long_thrower.cpp

fire.o: ./ant_types/fire.cpp
	$(CC) -c ./ant_types/fire.cpp

wall.o: ./ant_types/wall.cpp
	$(CC) -c ./ant_types/wall.cpp

ninja.o: ./ant_types/ninja.cpp
	$(CC) -c ./ant_types/ninja.cpp

bodyguard.o: ./ant_types/bodyguard.cpp
	$(CC) -c ./ant_types/bodyguard.cpp

bee.o: bee.cpp
	$(CC) -c bee.cpp

space.o: space.cpp
	$(CC) -c space.cpp

game.o: game.cpp
	$(CC) -c game.cpp

driver.o: driver.cpp
	$(CC) -c driver.cpp

ant_test.o: ant_test.cpp
	$(CC) -c ant_test.cpp

test_a: ant_test.o colony.o ant.o harvester.o thrower.o fire.o short_thrower.o long_thrower.o wall.o ninja.o bodyguard.o 
	$(CC) -o test_a ant_test.o colony.o ant.o harvester.o thrower.o fire.o short_thrower.o long_thrower.o wall.o ninja.o bodyguard.o

clean:
	rm -f $(EXE) *.o test_a
