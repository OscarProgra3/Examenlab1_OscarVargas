#include <iostream>
#include "targaryan.h"
#include <string>

using namespace std;

targaryan::targaryan(string reina, string emblema, string lema, int cantd, vector <dothraki*> doth, int cantibar)
{
	this->reina=reina;
	this->emblema=emblema;
	this->lema=lema;
	this->cantd=cantd;
	this->doth=doth;
	this->cantibar=cantibar;
}


void targaryan::setDothraki(dothraki* d)
{
	doth.push_back(d);
}

dothraki* targaryan::getDothraki(int num)
{
	return doth.at(num);
}