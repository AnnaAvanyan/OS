#include "pch.h"
#include "Complex.h"
#include <iostream>



	//constructor 
	Complex::Complex(double Real, double Imaginary) :mReal{ Real }, mImaginary{ Imaginary }
	{

	}
	//returns the absolute value 
	double  Complex::absolute_value() const
	{
		return sqrt(mReal*mReal + mImaginary * mImaginary);
	}

	//compares two complex numbers by their absolute value
	bool Complex::operator < (const Complex& rhs) const
	{
		return absolute_value() < rhs.absolute_value();
	}

	//adds the real+real and imaginary +imaginary 
	Complex Complex::operator + (const Complex& rhs) const
	{
		return Complex{ mReal + rhs.mReal,mImaginary + rhs.mImaginary };
	}

	//subtracts the real-real and imaginary-imaginary 
	Complex Complex::operator - (const Complex& rhs) const
	{
		return Complex{ mReal - rhs.mReal,mImaginary - rhs.mImaginary };
	}
	//multiplies the real and imaginary parts of the complex number by a constant
	Complex Complex::operator * (double num) const
	{
		return Complex{ mReal *num , mImaginary*num };
	}
