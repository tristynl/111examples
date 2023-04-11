# A default target, executed when you type "make"
.PHONY: all
all: hello 

# how to build null_main from null_main.cpp
hello: hello.cpp
	g++ -std=c++2a -o hello hello.cpp

# delete previously built artifacts
.PHONY: clean 
clean:
	rm -f hello 
