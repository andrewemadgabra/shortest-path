build: base1 base2

base1: main.o link.o node.o list.o function.o
	g++ main.o link.o node.o list.o function.o -o build1

base2: main.o link.o node.o list.o acquireLink.o
	g++ main.o link.o node.o list.o acquireLink.o -o build2

clean:
	rm *.o
	rm *.exe

*.o: main.cpp link.cpp node.cpp list.cpp acquireLink.cpp *.h
	g++ -c main.cpp link.cpp node.cpp list.cpp acquireLink.cpp 