#pragma once
#include "Vector.h"

class Stiva : public Vector {
public:
	Stiva();
	Stiva(int);
	Stiva(const Stiva&);
	~Stiva();

	Stiva& operator=(const Stiva&);
	friend ostream& operator<<(ostream&, const Stiva&);
	friend istream& operator>>(istream&, Stiva&);

	void push(const Complex&);
	Complex pop();

	bool purImaginar();

};
