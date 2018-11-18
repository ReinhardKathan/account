#pragma once

#include"stdafx.h"
#include <iostream>

extern int wahl;
extern int wert;

extern int* zWahl=&wahl;
extern int* zWert=&wert;



void modus();		//kein klassischer Rückgabewert, da Zeiger gesetzt werden



