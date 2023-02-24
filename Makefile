main: main.o funcs.o
	g++ main.o funcs.o -o main

main.o: main.cpp
	g++ -c main.cpp

funcs.o: funcs.cpp
	g++ -c funcs.cpp

clean:
	rm -f main.o funcs.o
