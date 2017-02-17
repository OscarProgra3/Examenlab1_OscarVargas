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


void targaryan::setDothraki(dothraki* dothraki)
{
	dothraki.push_back(dothraki);
}

dothraki* stark::getDothraki(int num)
{
	return dothraki.at(num);
}