
#include <iostream>
using namespace std;

// The declaration of the struct complex, implementing basic imaginary (or complex) 
// number support.  Typically for a more "complex" class, we would put this decleration
// into a .h or .hpp file

struct complex {
   
   // To get cout to accept a complex object after the insertion operator, we overload 
   // the insertion operator to recognize an ostream object on the left and a complex 
   // object on the right. Overloaded << operator function must then be declared as a 
   // friend of class complex so it can access the private data within a complex object.
  
   // Remember: structs are DEFAULT PUBLIC on data access.  turn it off using the
   // private: qualifier if you don't want this

   friend ostream& operator<< (ostream&, const complex&);
   
   private:
      double re = 0.0;
      double im = 0.0;
	  
   public:
      double real() const { return re; }
      double imag() const { return im; }
    
      // Note - you can have multiple constructors with different args
      // These are the different ways of initializing an object at create time
      // note the use of DEFAULT VALUES for the constructor arguments

      complex (double re_ = 0.0, double im_ = 0.0): re(re_), im(im_) {}
	 
      // "copy consructor" - makes one complex from another 
      complex (const complex & other) { re = other.re, im = other.im; }
      // we could also write this like this:
      // complex(const complex & other): re(other.re), im(other.im) {} 
      // which is more efficient, and why??

      // we could do the below .. but using the default values above in the 
      // two arg constructor DOES THIS FOR US, so we can write complex c { 1.0 }
      // or we could write complex c {}, or complex c { 1.1, 2.2 }
      // complex (double re_ = 0.0) { re(re_), im(0.0) {}

      // then we have the operator +, which lets us add two complex numbers together
      // example: complex a {}; complex b {1.0, 1.0}; complex c = a + b;
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

