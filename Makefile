main: main.o
	g++ -o main main.o

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp

tests.o: tests.cpp doctest.h

clean:
	rm -f main tests main.o tests.o
