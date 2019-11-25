#ifndef TACKA_H
#define TACKA_H
#include<iostream>
using namespace std;

class Tacka {
public:
	Tacka(int x = 0, int y = 0) :x_(x), y_(y) {};

	int dohvatiX() const;
	int dohvatiY() const;
	void pisi() const;
private:
	int x_, y_;
};
#endif //! TACKA_H