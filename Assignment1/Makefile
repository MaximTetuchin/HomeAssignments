all: Assignment1

Assignment1: main.o function.o
	g++ main.o function.o -o Assignment1

main.o: main.cpp
	g++ -c main.cpp

function.o: function.cpp
	g++ -c function.cpp

clean:
	rm -rf *.o Assignment1