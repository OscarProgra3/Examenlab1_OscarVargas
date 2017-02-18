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
		vector <guardiareal*> guardia;
		double cantdin;
		int fuerzam;
		int cantinte;
		 	
		
	public:
		lannister(string ,string, string, vector <guardiareal*> , double ,int,int);

		void setGuardiareal(guardiareal*);
		guardiareal* getGuardiareal(int);
		
		
		~lannister();

};
#endif
