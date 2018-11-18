#pragma once
#include "stdafx.h"
#include <iostream>

class KontoEinkommen {

private: int stand = 0;								// wenn beim Anlegen keine Werte eingegeben werden, so werden diese Werte übernommen
		 int limit = 1000;

public: 
	
	
	KontoEinkommen(int start, int max) {		//Konstruktor: wenn man ein neues Konto anlegt, kann man Startwert und Limit am Anfang festlegen

		this->stand = start;
		this->limit = max;

	}
	
	void increase(int* value);
	void decrease(int* value);
	void StandAngeben();
};

