main: main.o box.o
	g++ -o main main.o box.o

main.o: main.cpp box.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

clean:
	rm -f main.o box.o
