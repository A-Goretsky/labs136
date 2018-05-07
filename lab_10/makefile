STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: main.cpp funcs.cpp labstructs.h
	@$(CXX) $(STANDARD) main.cpp funcs.cpp -Wall -Wextra -o main

run:
	./main

tests: tests.cpp funcs.cpp
	g++ $(STANDARD) $^ -o tests -Wall -Wextra

clean:
	rm main