files := $(wildcard *.cpp)

all:
	$(CXX) -fdiagnostics-color=always -Wall $(files) -O3 -o main