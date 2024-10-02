all: Assignment1

Assignment1: main.o output_function.o
	g++ main.o output_function.o -o Assignment1

main.o: main.cpp
	g++ -c main.cpp

output_function.o: output_function.cpp
	g++ -c output_function.cpp

clean:
	rm -rf *.o Assignment1