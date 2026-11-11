CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

all: demo

demo: Point.o Segment.o Triangle.o main.o
	$(CXX) $(CXXFLAGS) Point.o Segment.o Triangle.o main.o -o demo

Point.o: src/Point.cpp include/Point.h
	$(CXX) $(CXXFLAGS) -c src/Point.cpp -o Point.o

Segment.o: src/Segment.cpp include/Segment.h include/Point.h
	$(CXX) $(CXXFLAGS) -c src/Segment.cpp -o Segment.o

Triangle.o: src/Triangle.cpp include/Triangle.h include/Segment.h include/Point.h
	$(CXX) $(CXXFLAGS) -c src/Triangle.cpp -o Triangle.o

main.o: main.cpp include/Point.h include/Triangle.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f *.o demo demo.exe

.PHONY: all clean
