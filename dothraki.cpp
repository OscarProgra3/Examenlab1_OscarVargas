#include "dothraki.h"

dothraki::dothraki(string nombre, string jefeb, string nomca, string colorca, int ataque, int defensa)
{
	this-> nombre=nombre;
	this-> jefeb=jefeb;
	this->nomca=nomca;
	this->colorca=colorca;
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


string pequefn::getJefeb()
{
	return jefeb;
}

void pequefn::setJefeb(string jefeb)
{
	this->jefeb=jefeb;
}


string pequefn::getNomca()
{
	return nomca;
}

void pequefn::setNomca(string nomca)
{
	this->nomca=nomca;
}


string pequefn::getColorca()
{
	return colorca;
}

void pequefn::setColorca(string colorca)
{
	this->colorca=colorca;
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
