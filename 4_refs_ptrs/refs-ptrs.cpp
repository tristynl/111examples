
//
// NAME
//    refs-ptrs - illustrate differences between pointers
//                and references.
//

#include <iostream>
using namespace std;

int main() {
   int n {6}; // simple integer.
   cout << "n=" << n << endl;
   cout << "&n= " << &n << endl;
   int* p {&n}; // pointer to int n.
   cout << "p=" << p << endl;
   cout << "*p=" << *p << endl;
   int& r {n}; // reference to int n.
   cout << "&r=" << &r << endl;
   cout << "r=" << r << endl;
   r=99;
   cout << "n=" << n << endl;
   return 0;
}

//TEST// ./refs-ptrs >refs-ptrs.lis
//TEST// mkpspdf refs-ptrs.ps refs-ptrs.cpp refs-ptrs.lis

