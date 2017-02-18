#include <iostream>
#include "stark.h"
#include <string>
using namespace std;

stark::stark(string jefe,int cantlob,string emblema,string lema,vector <pequefn*> ejer, string guerrerov,int cantintegran)
{
	this->jefe=jefe;
	this->cantlob=cantlob;
	this->emblema=emblema;
	this->lema=lema;
	this->ejer=ejer;
	this->guerrerov=guerrerov;
	this->cantintegran=cantintegran;
}


void stark::setEjer(pequefn* e)
{
	ejer.push_back(e);
}

pequefn* stark::getEjer(int num)
{
	return ejer.at(num);
}