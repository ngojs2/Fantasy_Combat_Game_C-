
output: main.o character.o menu.o vampire.o barbarian.o bluemen.o medusa.o harrypotter.o
	g++ -std=c++11 -o battle main.o character.o menu.o vampire.o barbarian.o bluemen.o medusa.o harrypotter.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

character.o: character.cpp character.hpp
	g++ -std=c++11 -c character.cpp

menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp

vampire.o: vampire.cpp vampire.hpp
	g++ -std=c++11 -c vampire.cpp

barbarian.o: barbarian.cpp barbarian.hpp
	g++ -std=c++11 -c barbarian.cpp

bluemen.o: bluemen.cpp bluemen.hpp
	g++ -std=c++11 -c bluemen.cpp

medusa.o: medusa.cpp medusa.hpp
	g++ -std=c++11 -c medusa.cpp

harrypotter.o: harrypotter.cpp harrypotter.hpp
	g++ -std=c++11 -c harrypotter.cpp

clean:
	rm *.o battle
