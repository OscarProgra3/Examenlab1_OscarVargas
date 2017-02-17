#include "guardiareal.h"

//contructor
guardiareal::guardiareal(string nombre, int edad, string tipos,int ataque, int defensa)
{
	this-> nombre=nombre;
	this-> edad=edad;
	this->tipos=tipos;
	this->ataque=ataque;
	this->defensa=defensa;
}



string guardiareal::getNombre()
{
	return nombre;
}

void guardiareal::setNombre(string nombre)
{
	this->nombre=nombre;
}


int guardiareal::getEdad()
{
	return edad;
}

void guardiareal::setEdad(int edad)
{
	this->edad=edad;
}


string guardiareal::getTipos()
{
	return tipos;
}

void guardiareal::setTipos(string tipos)
{
	this->tipos=tipos;
}


int guardiareal::getAtaque()
{
	return ataque;
}

void guardiareal::setAtaque(int ataque)
{
	this->ataque=ataque;
}


int guardiareal::getDefensa()
{
	return defensa;
}

void guardiareal::setDefensa(int defensa)
{
	this->defensa=defensa;
}
