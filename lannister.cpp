#include <iostream>
#include "lannister.h"
using namespace std;

lannister::lannister(string jefe,string emblema,string lema, vector <guardiareal*> guardiareal, double cantdin ,int fuerzam,int cantinte)
{
	this->jefe=jefe;
	this->emblema=emblema;
	this->lema=lema;
	this->guardiareal=guardiareal;
	this->cantdin=cantdin;
	this->fuerzam=fuerzam;
	this->cantinte=cantinte;
}


void stark::setPequefn(guardiareal* g)
{
	guardiareal.push_back(g);
}

guardiareal* stark::getGuardiareal(int num)
{
	return guardiareal.at(num);
}