
#include"stdafx.h"
#include <iostream>
#include "Eingabe.h"


void modus() {
	
	

	std::cout << "Geben Sie an, ob sie den Kontostand erh�hen (0) oder verringern m�chten (1)" << std::endl;
	
	std::cin >> *zWahl;
	

	std::cout << "Geben Sie die gew�nschte H�he der Konto�nderung an" << std::endl;
	std::cin >> *zWert;
	return;

}
