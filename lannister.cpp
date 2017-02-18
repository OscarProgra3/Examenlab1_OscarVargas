#include <iostream>
#include "lannister.h"
using namespace std;

lannister::lannister(string jefe, string animal, string lema, vector <guardiareal*> guardia, double cantdin ,int fuerzam,int cantinte)
{
	this->jefe=jefe;
	this->animal=animal; 
	this->lema=lema;
	this->guardia=guardia;
	this->cantdin=cantdin;
	this->fuerzam=fuerzam;
	this->cantinte=cantinte;
}


void lannister::setGuardiareal(guardiareal* g)
{
	guardia.push_back(g);
}

guardiareal* lannister::getGuardiareal(int num)
{
	return guardia.at(num);
}