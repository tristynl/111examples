
#include "complex.h"

// The definition of methods and operators declared in the above class declaration
// ie - "definitions".  For a more complex class, these would go into a .cpp file

complex complex::operator+ (const complex& that) const {
   return {this->re + that.re, this->im + that.im};
}

ostream& operator<< (ostream& out, const complex& cval) {
   return out << "{" << cval.re << "," << cval.im << "}";
}
