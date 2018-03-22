STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: main.cpp funcs.cpp funcs.hpp
	@$(CXX) $(STANDARD) main.cpp funcs.cpp -Wall -Wextra -o main

run:
	./main

tests: tests.cpp funcs.cpp
			g++ $^ -o tests -Wall -Wextra

clean:
	rm main