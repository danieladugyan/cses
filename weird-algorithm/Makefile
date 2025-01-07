compile:
	g++ -std=c++20 -O2 -Wall solution.cpp -o solution.exe

solve: compile
	./solution.exe < input

test: compile
	./solution.exe < input > output
	diff output correct