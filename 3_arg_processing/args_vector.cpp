
//
// NAME
//    args - print out the argument vector
//
// SYNOPSIS
//    args [string...]
//
// DESCRIPTION
//    Prints out its arguments to stdout, one per line.
//    Used vector (begin,end) ctor to intialize to strings.
//    begin - points at first element of range
//    end - points at empty slot after last element of range
//    Uses foreach style loop (with :).
//    auto& indicates a reference
//

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (int argc, char** argv) {
   string execname {argv[0]};
   vector<string> args (&argv[1], &argv[argc]);
   cout << "execname = " << execname << endl;
   for (const auto& arg: args) cout << arg << endl;
   return EXIT_SUCCESS;
}

//TEST// ./args foo bar baz qux quux >args.lis 2>&1
//TEST// mkpspdf args.ps args.cpp args.lis

