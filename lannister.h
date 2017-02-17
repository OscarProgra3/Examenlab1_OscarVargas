#ifndef LANNISTER_H
#define LANNISTER_H
#include "guardiareal.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class lannister
{
	private:
		
		string jefe;
		string animal;
		string lema;
		vector <guardiareal*> guardiareal;
		double cantdin;
		int fuerzam;
		int cantinte;
		 	
		
	public:

		void setGuardiareal(guardiareal*);
		guardiareal* getGuardiareal(int);
		
		lannister(string ,int ,string, vector <guardiareal*> , double ,int,int);
		~lannister();

};
#endif
