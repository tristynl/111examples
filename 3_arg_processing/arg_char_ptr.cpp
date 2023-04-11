
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

#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char** argv) {
   cout << "argc = " << argc << endl;
   cout << "argv = " << argv << endl;
   for (int argi = 0; argi != argc; ++argi) {
      cout << "argv[" << argi << "] = "
           << static_cast<const void*> (argv[argi]) << "->\""
           << argv[argi] << "\"" << endl;
   }
   return EXIT_SUCCESS;
}

//TEST// ./argv foo bar baz qux quux >argv.lis 2>&1
//TEST// mkpspdf argv.ps argv.cpp argv.lis

