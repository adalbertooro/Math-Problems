CXX = g++
CXXFLAGS = -ansi -pedantic -Wall -Werror -std=c++14 -pthread
# Rule to link object code files to create executable file        
do: main.o
	$(CXX) $(CXXFLAGS) -o do $^
# Rules to compile source code file to object code
main.o: main.cpp
# Pseudo-target to remove object code and executable files
clean:
	rm -f do *.o