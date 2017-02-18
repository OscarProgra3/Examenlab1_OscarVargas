#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H
#include <string>
#include <iostream>

using namespace std;

class guardiareal
{
	private:

		string nombre;
		int edad;
		string tipos;
		int ataque;
		int defensa;

	public:
		guardiareal(string nombre, int edad, string tipos, int ataque, int defensa);//constructor sobrecargado

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getTipos();
		void setTipos(string);

		int getAtaque();
		void setAtaque(int);


		int getDefensa();
		void setDefensa(int);


		

};
#ifndef