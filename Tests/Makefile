tests := $(wildcard *.cpp)
function := $(wildcard ../Functions/*.cpp)
util := $(wildcard ../Functions/Util/*.cpp)

unity:
	$(CXX) -fdiagnostics-color=always -Wall $(tests) $(function) $(util) -O3 -o Unity