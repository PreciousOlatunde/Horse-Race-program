raceTournament: horse.o race.o tournament.o  main.o
	g++ horse.o race.o tournament.o  main.o -o raceTournament
horse.o: horse.cpp horse.o
	g++ -c horse.cpp
race.o: race.cpp race.h horse.h
	g++ -c race.cpp
tournament.o: tournament.cpp tournament.h race.h horse.h
	g++ -c tournament.cpp
main.o: main.cpp tournament.h race.h horse.h
	g++ -c main.cpp
clean: 
	rm -f *.o
	rm raceTournament
run: raceTournament
	./raceTournament