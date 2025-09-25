# A Makefile is used to automate the compilation and linking of all .cpp and .h files into a single executable program file

# Instructions:
# type clear to clear the screen and for easy reading of output
# type make to execute the Makefile and automatically compile the program
# type ./prog to run the program after it has been compiled
# type make clean to remove all executable and object files so the program can be recompiled for updates
# combine these commands as follows into one line to rapidly run and update code: clear;make;./prog;make clean
# use the up arrow and enter to rapidly update and run programs

# executable file to create and its dependancies
prog : driver.o IntArray.o
	g++ -std=c++11 -o prog driver.o IntArray.o

# file dependencies
driver.o : IntArray.h 
	g++ -std=c++11 -c driver.cpp
IntArray.o : IntArray.h
	g++ -std=c++11 -c IntArray.cpp

# remove all object and executable files
clean:
	rm -f *.o
	rm prog
