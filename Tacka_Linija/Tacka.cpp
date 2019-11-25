#include "Tacka.h"
#include<iostream>
int Tacka::dohvatiX() const
{
	return x_;
}

int Tacka::dohvatiY() const
{
	return y_;
}

void Tacka::pisi() const
{
	cout << "(" << x_ << "," << y_ << ")" << endl;
}
