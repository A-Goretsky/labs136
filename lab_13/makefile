STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main taska taskb taskc taskd

main: main.cpp profile.cpp profile.hpp network.cpp network.hpp
	@echo Compiling main with all tasks...
	@$(CXX) $(STANDARD) main.cpp profile.cpp network.cpp -Wall -Wextra -o main
	@echo main compiled.

taska: maina.cpp profile.cpp profile.hpp network.cpp network.hpp
	@echo Compiling Task A...
	@$(CXX) $(STANDARD) maina.cpp profile.cpp network.cpp -Wall -Wextra -o taska
	@echo Task A Compiled.

taskb: mainb.cpp profile.cpp profile.hpp network.cpp network.hpp
	@echo Compiling Task B...
	@$(CXX) $(STANDARD) mainb.cpp profile.cpp network.cpp -Wall -Wextra -o taskb
	@echo Task B Compiled.

taskc: mainc.cpp profile.cpp profile.hpp network.cpp network.hpp
	@echo Compiling Task C...
	@$(CXX) $(STANDARD) mainc.cpp profile.cpp network.cpp -Wall -Wextra -o taskc
	@echo Task C Compiled.

taskd: maind.cpp profile.cpp profile.hpp network.cpp network.hpp
	@echo Compiling Task D...
	@$(CXX) $(STANDARD) maind.cpp profile.cpp network.cpp -Wall -Wextra -o taskd
	@echo Task D Compiled.

run:
	./main

tests: tests.cpp
	g++ $(STANDARD) $^ -o tests -Wall -Wextra

clean:
	rm main