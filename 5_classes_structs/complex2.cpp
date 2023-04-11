
#include <iostream>
using namespace std;

// The decleration of the class complex, implementing basic imaginary (or complex) 
// number support.  For an even more "complex" class, we would put this decleration
// into a .h or .hpp file

class complex {
   
   // To get cout to accept a comple object after the insertion operator, we overload 
   // the insertion operator to recognize an ostream object on the left and a complex 
   // object on the right. Overloaded << operator function must then be declared as a 
   // friend of class complex so it can access the private data within a complex object.
   
   friend ostream& operator<< (ostream&, const complex&);
   
   private:
      double re = 0.0;
      double im = 0.0;
	  
   public:
      double real() const { return re; }
      double imag() const { return im; }
      complex (double re_ = 0.0, double im_ = 0.0): re(re_), im(im_) {}
      complex operator+ (const complex& that) const;
};

// The definition of methods and operators declared in the above class declaration
// ie - "definitions".  For a more complex class, these would go into a .cpp file

complex complex::operator+ (const complex& that) const {
   return {this->re + that.re, this->im + that.im};
}

ostream& operator<< (ostream& out, const complex& cval) {
   return out << "{" << cval.re << "," << cval.im << "}";
}

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

//TEST// ./complex1 >complex1.lis 2>&1
//TEST// mkpspdf complex1.ps complex1.cpp complex1.lis

