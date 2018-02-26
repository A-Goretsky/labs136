ashokan: ashokan.cpp ashokan.h Current_Reservoir_Levels.tsv tests
		g++ -o ashokan ashokan.cpp funcs.cpp

tests: doctest_lab3.cpp ashokan.cpp
		g++ -o tests doctest_lab3.cpp
run:
		./ashokan

clean:
		rm ashokan

doctest:
		./doctest
