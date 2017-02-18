#ifndef PEQUEFN_H
#define PEQUEFN_H
#include <string>
#include <iostream>

using namespace std;

class pequefn
{
	private:

		string nombre;
		string simbolo;
		string lema;
		int cantper;
		int ataque;
		int defensa;

	public:
		pequefn(string, string, string, int, int, int);//constructor

		string getNombre();
		void setNombre(string);

		string getSimbolo();
		void setSimbolo(string);

		string getLema();
		void setLema(string);

		int getCantper();
		void setCantper(int);

		int getAtaque();
		void setAtaque(int);

		int getDefensa();
		void setDefensa(int);
		

};
#endif