main: main.o util.o array.o
	g++ main.o util.o array.o -o build
main.o: main.cc util.h array.h
	g++ -c main.cc -o main.o
util.o: util.cc util.h
	g++ -c util.cc -o util.o
array.o: array.cc array.h
	g++ -c array.cc -o array.o
clean:
	rm -rf *.o
