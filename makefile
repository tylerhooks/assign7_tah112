# makefile

CharStack: Driver.o CharStack.o 
	g++ Driver.o CharStack.o -o CharStack.o
TestDriver.o: Driver.cpp CharStack.h
	g++ -c Driver.cpp
CharStack.o: CharStack.cpp CharStack.h
	g++ -c CharStack.cpp
clean: 
 	rm *.o
 	rm CharStack