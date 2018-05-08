STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: main.cpp funcs.cpp def.hpp
	@$(CXX) $(STANDARD) main.cpp funcs.cpp -Wall -Wextra -o main

run:
	./main

poem: poem.cpp
	g++ poem.cpp -Wall -Wextra -o poem

tests: tests.cpp funcs.cpp
	g++ $(STANDARD) $^ -o tests -Wall -Wextra

clean:
	rm main