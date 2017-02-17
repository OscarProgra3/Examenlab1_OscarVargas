#include <iostream>
#include "stark.h"

stark::stark(string jefe,int cantlob,string emblema,string lema,vector <pequefn*> pequefn, string guerrerov,int cantintegran)
{
	this->jefe=jefe;
	this->cantlob=cantlob;
	this->emblema=emblema;
	this->lema=lema;
	this->pequefn=pequefn;
	this->cantintegran=cantintegran;
}


void stark::setPequefn(pequefn* pequefn)
{
	pequefn.push_back(pequefn);
}

pequefn* stark::getPequefn(int num)
{
	return pequefn.at(num);
}