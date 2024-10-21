all: Assignment2a

Assignment2a: main.o text_reverse.o
	g++ main.o text_reverse.o -o Assignment2a

main.o: main.cpp
	g++ -c main.cpp

text_reverse.o: text_reverse.cpp
	g++ -c text_reverse.cpp

clean:
	rm -rf *.o Assignment2a