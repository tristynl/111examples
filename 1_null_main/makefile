# A default target, executed when you type "make"
.PHONY: all
all: null_main

# how to build null_main from null_main.cpp
null_main: null_main.cpp
	g++ -std=c++2a -o null_main null_main.cpp

# delete previously built artifacts
.PHONY: clean 
clean:
	rm -f null_main
