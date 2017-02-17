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
		vector <pequefn*> pequefn;
		string guerrerov;
		int cantintegran;

		 	
		
	public:
		
		stark(string ,int ,string ,string ,vector <pequefn*> , string ,int);
		~stark();



};
#endif
