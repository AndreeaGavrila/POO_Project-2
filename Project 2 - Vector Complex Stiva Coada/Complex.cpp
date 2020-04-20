#include "Complex.h"

Complex::Complex() : re(0), im(0) {}

Complex::Complex(float re, float im) : re(re), im(im) {
	std::cout << "NrComplex\n";
	if (re == 0 && im == 0)
		throw(NonBinary());
}

Complex::Complex(const Complex& nr) : re(nr.re), im(nr.im) {}

Complex::~Complex() {
	this->re = 0;
	this->im = 0;
}


Complex& Complex::operator=(const Complex& nr) {
	if (this != &nr) {
		re = nr.re;
		im = nr.im;
	}
	return *this;
}


ostream& operator<<(ostream& os, const Complex& nr) {
	os << nr.re;
	os << showpos << nr.im << noshowpos << "i";
	return os;
}

istream& operator>>(istream& is, Complex& nr) {
	cin.exceptions(istream::failbit);
	cout << "Re: ";
	is >> nr.re;
	cout << "Im: ";
	is >> nr.im;
	return is;
}

bool Complex:: operator==(Complex a)
{
	return (a.re == re && a.im == im);
}

bool Complex::eImaginar() {
	if (re == 0 and im != 0) {
		return true;
	}
	return false;
}