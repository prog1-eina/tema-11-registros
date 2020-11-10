CXX = g++
CXXFLAGS = -g -Wall -Wextra

nifs: 1-nifs-ejemplo-main.o nif.o
1-nifs-ejemplo-main.o: 1-nifs-ejemplo-main.cpp nif.hpp
nif.o: nif.cpp nif.hpp
