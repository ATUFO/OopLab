// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double real, double imaginary);  // constructor of Complex
    Complex(); 
    Complex add( const Complex &right ); // add right to this Complex
    Complex subtract( const Complex &right ); // subtract right to this complex
    void printComplex(); // display this Complex
    void setComplexNumber( double rp, double ip ); // set Complex
private:
    int realPart;
    int imaginaryPart;
};
#endif
