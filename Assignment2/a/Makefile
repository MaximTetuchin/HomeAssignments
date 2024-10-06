all: Assignment2a

Assignment2a: main.o reverse_polish_entry.o text_reverse.o
	g++ main.o reverse_polish_entry.o text_reverse.o -o Assignment2a

main.o: main.cpp
	g++ -c main.cpp

reverse_polish_entry.o: reverse_polish_entry.cpp
	g++ -c reverse_polish_entry.cpp

text_reverse.o: text_reverse.cpp
	g++ -c text_reverse.cpp

clean:
	rm -rf *.o Assignment2a