# makefile

CharStack: TestDriver.o CharStack.o 
	g++ TestDriver.o CharStack.o -o CharStack.o
TestDriver.o: TestDriver.cpp CharStack.h
	g++ -c TestDriver.cpp
CharStack.o: CharStack.cpp CharStack.h
	g++ -c CharStack.cpp
clean: 
 	rm *.o
 	rm CharStack