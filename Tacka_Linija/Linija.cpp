#include "Linija.h"
Linija::Linija(int kapacitet) :kapacitet_(kapacitet), poslednji_element_(0) {
	niz_ = new Tacka[kapacitet_];
};

Linija::Linija(const Linija& druga):kapacitet_(druga.kapacitet_), poslednji_element_(druga.poslednji_element_){
	
	niz_ = new Tacka[kapacitet_];
	
	for (int i = 0; i < poslednji_element_; i++) {
		niz_[i] = druga.niz_[i];
	}
}

Linija::Linija( Linija&& druga):kapacitet_(druga.kapacitet_),poslednji_element_(druga.poslednji_element_){
	
	niz_ = druga.niz_;
	druga.niz_=nullptr ;
}
Linija::~Linija()
{
	delete[] niz_;
	kapacitet_ = poslednji_element_ = 0;
}

void Linija::dodajTacku(const Tacka& t)
{
	if (poslednji_element_ == kapacitet_)return;
	niz_[poslednji_element_++] = t;
	
}

void Linija::pisi() const
{
	for (int i = 0; i < poslednji_element_; i++) {
		niz_[i].pisi();
		cout << endl;
	}
}
