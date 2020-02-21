#include "Persona.h"
Persona::Persona(){}
Persona::Persona(string n) { this->nombre = n; }

Persona::~Persona() { std::cout << "Persona eliminada" << std::endl; }
string Persona::getNombre() { return this->nombre; }
