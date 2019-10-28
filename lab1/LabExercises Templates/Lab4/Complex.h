// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double real, double imaginary);
    Complex();
    Complex add( const Complex &right );
    Complex subtract( const Complex &right );
    void printComplex();
    void setComplexNumber( double rp, double ip );
private:
    int realPart;
    int imaginaryPart;
};
#endif
