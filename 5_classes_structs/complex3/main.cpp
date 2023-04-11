
#include "complex.h"

// and our simple main method to exercize the above

int main() {
   complex a {1.1, 2.2};
   complex b {3.3, 4.4};
   complex c {a + b};
   cout << a << " + " << b << " = " << c << endl;
   complex d {1,1};
   cout << d << endl;
   return 0;
}