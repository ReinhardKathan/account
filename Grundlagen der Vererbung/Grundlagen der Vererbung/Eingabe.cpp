
#include"stdafx.h"
#include <iostream>
#include "Eingabe.h"


void modus() {
	
	

	std::cout << "Geben Sie an, ob sie den Kontostand erhöhen (0) oder verringern möchten (1)" << std::endl;
	
	std::cin >> *zWahl;
	

	std::cout << "Geben Sie die gewünschte Höhe der Kontoänderung an" << std::endl;
	std::cin >> *zWert;
	return;

}
