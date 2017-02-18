#include "pequefn.h"
#include <string>

using namespace std;

pequefn::pequefn(string nombre, string simbolo, string lema, int cantper, int ataque, int defensa){
	this->nombre=nombre; 
	this->simbolo=simbolo;
	this->lema=lema;
	this->cantper=cantper;
	this->ataque=ataque;
	this->defensa=defensa;
}


string pequefn::getNombre()
{
	return nombre;
}

void pequefn::setNombre(string nombre)
{
	this->nombre=nombre;
}

string pequefn::getSimbolo()
{
	return simbolo;
}

void pequefn::setSimbolo(string simbolo)
{
	this->simbolo=simbolo;
}

string pequefn::getLema()
{
	return lema;
}

void pequefn::setLema(string lema)
{
	this->lema=lema;
}

int pequefn::getCantper()
{
	return cantper;
}

void pequefn::setCantper(int cantper)
{
	this->cantper=cantper;
}


int pequefn::getAtaque()
{
	return ataque;
}

void pequefn::setAtaque(int ataque)
{
	this->ataque=ataque;
}


int pequefn::getDefensa()
{
	return defensa;
}

void pequefn::setDefensa(int defensa)
{
	this->defensa=defensa;
}