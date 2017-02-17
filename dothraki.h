#ifndef DOTHRAKI_H
#define DOTHRAKI_H
#include <string>

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
		dothraki();//constructor

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


		~dothraki();//destructor


};
#ifndef