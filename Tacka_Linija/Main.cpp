#include"Linija.h"
#include"Tacka.h"
int main() {
	Tacka t1(10, -10);
	Tacka t2;
	Tacka t3(5);
	Tacka t4(t1);

	Linija linija(4);
	
	linija.dodajTacku(t1);
	linija.dodajTacku(t2);
	linija.dodajTacku(t3);

	linija.pisi(); cout << endl;

	Linija linijaCpy(linija);
	linijaCpy.pisi(); cout << endl;

	cout << "------------------------------" << endl;
	// Sta se desava sa 'linijaCpy'?

	linija.dodajTacku(t4);
	linija.pisi(); cout << endl;
	linijaCpy.pisi(); cout << endl;

	cout << "------------------------------" << endl;

	linijaCpy.dodajTacku(Tacka(-9, -9));
	linija.pisi(); cout << endl;
	linijaCpy.pisi(); cout << endl;


	// Zbog eksplicitnog definisanja kopirajuceg konstruktora, nizovi su sad stvarno bili fizicki razdvojeni
	
	return 0;

}