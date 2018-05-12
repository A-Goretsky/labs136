STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: main.cpp profile.cpp profile.hpp network.cpp network.hpp
	@$(CXX) $(STANDARD) main.cpp profile.cpp network.cpp -Wall -Wextra -o main

run:
	./main

tests: tests.cpp
	g++ $(STANDARD) $^ -o tests -Wall -Wextra

clean:
	rm main