#pragma once
#include "Vector.h"

class Coada : public Vector {
public:
	Coada();
	Coada(int);
	Coada(const Coada&);
	~Coada();

	Coada& operator=(const Coada&);
	friend ostream& operator<<(ostream&, const Coada&);
	friend istream& operator>>(istream&, Coada&);

	void push(const Complex&);
	Complex pop();

	bool purImaginar();
};
