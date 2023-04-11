# A default target, executed when you type "make"
.PHONY: all
all: complex3 

# how to build null_main from null_main.cpp
complex3: complex.cpp complex.h main.cpp
	g++ -std=c++2a -o complex3 complex.cpp main.cpp

# delete previously built artifacts
.PHONY: clean 
clean:
	rm -f complex3 
