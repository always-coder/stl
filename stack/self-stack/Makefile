run : stack.o
	g++ -o run stack.o
stack.o : stack.cpp Stack.h
	g++ -std=c++11 -c stack.cpp
clean :
	rm stack.o run
