CXX = g++
CXXFLAGS = -g -Wall -Wextra

nifs: 1-nifs-ejemplo-main.o nif.o
	$(CXX) $(CXXFLAGS) -o nifs 1-nifs-ejemplo-main.o nif.o
1-nifs-ejemplo-main.o: 1-nifs-ejemplo-main.cpp nif.hpp
nif.o: nif.cpp nif.hpp

personas: 2-personas-ejemplo-main.o persona.o nif.o fecha.o
	$(CXX) $(CXXFLAGS) -o personas 2-personas-ejemplo-main.o persona.o nif.o fecha.o
2-personas-ejemplo-main.o: 2-personas-ejemplo-main.cpp persona.hpp nif.hpp fecha.hpp
persona.o: persona.cpp persona.hpp nif.hpp fecha.hpp
fecha.o: fecha.cpp fecha.hpp
