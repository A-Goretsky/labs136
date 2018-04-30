STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: funcs.cpp labstructs.h
	@$(CXX) $(STANDARD) funcs.cpp -Wall -Wextra -o main

run:
	./main

clean:
	rm main