.PHONY: all clean run

all: ashokan tests

ashokan: ashokan.cpp ashokan.h | Current_Reservoir_Levels.tsv
		g++ -o ashokan ashokan.cpp funcs.cpp

tests: doctest_lab3.cpp funcs.cpp
		g++ -o tests $^

run: ashokan
		./ashokan

clean:
		rm -f ashokan tests
