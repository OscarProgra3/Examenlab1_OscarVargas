#include "dothraki.h"

#include <iostream>
#include <string>

using namespace std;

dothraki::dothraki(string nombre, string jefeb, string nomca, string colorca, int ataque, int defensa)
{
	this-> nombre=nombre;
	this-> jefeb=jefeb;
	this->nomca=nomca;
	this->colorca=colorca;
	this->ataque=ataque;
	this->defensa=defensa;

}


string dothraki::getNombre()
{
	return nombre;
}

void dothraki::setNombre(string nombre)
{
	this->nombre=nombre;
}


string dothraki::getJefeb()
{
	return jefeb;
}

void dothraki::setJefeb(string jefeb)
{
	this->jefeb=jefeb;
}


string dothraki::getNomca()
{
	return nomca;
}

void dothraki::setNomca(string nomca)
{
	this->nomca=nomca;
}


string dothraki::getColorca()
{
	return colorca;
}

void dothraki::setColorca(string colorca)
{
	this->colorca=colorca;
}

int dothraki::getAtaque()
{
	return ataque;
}

void dothraki::setAtaque(int ataque)
{
	this->ataque=ataque;
}


int dothraki::getDefensa()
{
	return defensa;
}

void dothraki::setDefensa(int defensa)
{
	this->defensa=defensa;
}
