STANDARD := -std=c++14 $(CXXFLAGS)

.PHONY: all clean

all: main

main: funcs.cpp lab-images.cpp lab-images.hpp
	@$(CXX) $(STANDARD) funcs.cpp lab-images.cpp -Wall -Wextra -o main

run:
	./main

clean:
	rm main