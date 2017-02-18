#ifndef TARGARYAN_H
#define TARGARYAN_H

#include "dothraki.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class targaryan
{
	private:
		
		string reina;
		string emblema;
		string lema;
		int cantd;
		vector <dothraki*> doth;
		int cantibar;

		 	
	public:

		void setDothraki(dothraki*);
		dothraki* getDothraki(int);
		
		targaryan(string, string, string, int, vector <dothraki*>, int);
		~targaryan();

};
#endif
