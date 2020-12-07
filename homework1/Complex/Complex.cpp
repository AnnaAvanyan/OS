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
//cin>>real>>imaginary;
std::istream& operator>>(std::istream& in, Complex& complexNum)
{
	in >> complexNum.mReal >> complexNum.mImaginary;
	return in;
}
//outputs the complex number -> mReal + mImaginary*i 
std::ostream& operator<<(std::ostream& output, const Complex& complexNum)
{
	char imaginary = 'i';
	if (complexNum.mReal == 0)
	{
		output << complexNum.mReal;
		return output;
	}
	else if (complexNum.mImaginary == 0)
	{
		output << complexNum.mReal;
		return output;
	}
	else if (complexNum.mImaginary > 0)
	{
		output << complexNum.mReal << "+" << complexNum.mImaginary << imaginary;
		return output;
	}
	else
	{
		output << complexNum.mReal << complexNum.mImaginary << imaginary;
		return output;
	}
}
