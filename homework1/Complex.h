#pragma once
#include <iostream>


class Complex {
protected:

	double mReal, mImaginary;
public:

	//defualt constructor
	Complex() = default;
	//constructor 
	Complex(double Real, double Imaginary);
	//returns the absolute value 
	double  absolute_value() const;

	//compares two complex numbers by their absolute value
	bool /*Complex::*/operator < (const Complex& rhs) const;

	//adds the real+real and imaginary +imaginary 
	Complex operator + (const Complex& rhs) const;

	//subtracts the real-real and imaginary-imaginary 
	Complex operator - (const Complex& rhs)const;
	//multiplies the real and imaginary parts of the complex number by a constant
	Complex operator * (double num) const;

	friend std::istream& operator>>(std::istream&, Complex&);
	friend std::ostream& operator<<(std::ostream&, const Complex&);

};
