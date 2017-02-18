#include <iostream>
#include "targaryan.h"

targaryan::targaryan(string reina, string emblema, string lema, int cantd, vector <dothraki*> dothraki, int cantibar)
{
	this->reina=reina;
	this->emblema=emblema;
	this->lema=lema;
	this->cantd=cantd;
	this->dothraki=dothraki;
	this->cantibar=cantibar;
}


void targaryan::setDothraki(dothraki* d)
{
	dothraki.push_back(d);
}

dothraki* stark::getDothraki(int num)
{
	return dothraki.at(num);
}