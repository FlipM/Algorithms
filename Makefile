main := $(wildcard *.cpp)
function := $(wildcard Functions/*.cpp)
util := $(wildcard Functions/Util/*.cpp)

all:
	$(CXX) -fdiagnostics-color=always -Wall $(main) $(function) $(util) -O3 -o main