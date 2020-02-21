#ifndef _PERSONA_H
#define _PERSONA_H
#include <iostream>
using namespace std;
class Persona {
       protected:
	string nombre;

       public:
       Persona();
	Persona(string);
	~Persona();
	string getNombre();

};

#endif	// !PERSONA_H
