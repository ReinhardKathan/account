#include "stdafx.h"
#include <iostream>
#include "Konto_einkommen.h"

void KontoEinkommen::increase(int* value)
{

	stand = +*value;


}

void KontoEinkommen::decrease(int* value)

{
	
	stand = -*value;

}

void KontoEinkommen::StandAngeben()
{

	std::cout << "Der aktuelle Kontostand beträgt " << stand << " €."<<std::endl;

}