.PHONY: all clean run

all: main

main: main.cpp main.hpp | Current_Reservoir_Levels.tsv
		g++ -o ashokan main.cpp funcs.cpp

run: ashokan
		./ashokan

clean:
		rm -f ashokan
