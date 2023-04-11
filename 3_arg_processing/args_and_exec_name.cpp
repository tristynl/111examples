
//
// NAME
//    argv - print out the argument vector
//
// SYNOPSIS
//    argv [string...]
//
// DESCRIPTION
//    Prints out its arguments to stdout, one per line.
//    Uses C-style iteration, but still C++ output and casts.
//

#include <iostream>
using namespace std;

int main (int argc, char** argv) {
   cout << "argc = " << argc << endl;
   cout << "execname = \"" << argv[0] << "\"" << endl;
   for (int argi = 1; argi != argc; ++argi) {
      cout << "cmd arg[" << argi << "] = \""
           << argv[argi] << "\"" << endl;
   }
}

//TEST// ./argv foo bar baz qux quux >argv.lis 2>&1
//TEST// mkpspdf argv.ps argv.cpp argv.lis

