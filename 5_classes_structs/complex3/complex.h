
#include <iostream>
using namespace std;

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