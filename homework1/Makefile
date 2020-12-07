CXX = g++
CXXFLAGS = -c

all: main

main: main.o Complex.o
	$(CXX) main.o Complex.o -o main

main.o: main.cpp Complex.h
	$(CXX) $(CXXFLAGS) main.cpp -o main.o

Complex.o: Complex.cpp
	$(CXX) $(CXXFLAGS) Complex.cpp -o Complex.o

clean:
	rm *.o main
