#ifndef LINIJA_H
#define LINIJA_H
#include"Tacka.h"
using namespace std;
//#include<vector>

using namespace std;
class Linija {
public:
	//Ovo je konstruktor
	Linija(int kapacitet);

	//Kopirajuci konstruktor
	Linija(const Linija& druga);
	//Premestajuci konstruktor
	Linija( Linija&& druga);
	//Destruktor
	~Linija();
	
	void dodajTacku(const Tacka& t);
	void pisi() const;
private:
	//Dinamicki niz
	int kapacitet_,poslednji_element_;
    Tacka* niz_;//Ovo je niz takodje ali je pri potpisu sa prvog casa nastalo nerazumevanje i ono je niz ali od jednog elementa!!!
};
#endif //! LINIJA_H