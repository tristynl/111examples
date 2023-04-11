# a default makefile that builds all cpp files in the directory containing it into seperate executables 

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)

.PHONY: all
all: $(BINS) 

% : %.o
	g++ -std=c++2a -o $@ $^ 
 
.PHONY: clean 
clean:
	rm -f $(BINS) 
