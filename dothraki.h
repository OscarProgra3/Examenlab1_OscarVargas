#ifndef DOTHRAKI_H
#define DOTHRAKI_H

#include <string>
#include <iostream>

using namespace std;

class dothraki
{
	private:

		string nombre;
		string jefeb;
		string nomca;
		string colorca;
		int ataque;
		int defensa;

	public:
		dothraki(string ,string ,string ,string ,int ,int);//constructor

		string getNombre();
		void setNombre(string);

		string getJefeb();
		void setJefeb(string);

		string getNomca();
		void setNomca(string);

		string getColorca();
		void setColorca(string);

		int getAtaque();
		void setAtaque(int);


		int getDefensa();
		void setDefensa(int);
	
};
#endif