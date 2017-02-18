#ifndef STARK_H
#define STARK_H

#include "pequefn.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class stark
{
	private:
		
		string jefe;
		int cantlob;
		string emblema;
		string lema;
		vector <pequefn*> ejer;
		string guerrerov;
		int cantintegran;

		 	
		
	public:
		stark(string ,int ,string ,string ,vector <pequefn*> , string ,int);

		void setEjer(pequefn*);
		pequefn* getEjer(int);
		
		
		~stark();

};
#endif
