STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: main.cpp funcs.cpp funcs.hpp
	@$(CXX) $(STANDARD) main.cpp funcs.cpp -Wall -Wextra -o main
run:
	./main

clean:
	rm main
