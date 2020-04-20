#pragma once
#include <iostream>
#include "NonBinary.h"

using namespace std;

class Complex {
	float re, im;
public:
	Complex();
	Complex(float , float );
	Complex(const Complex&);
	~Complex();

	Complex& operator= (const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
	bool operator== (Complex a);

	bool eImaginar();

	friend class Vector;
	friend class Stiva;
	friend class Coada;
};