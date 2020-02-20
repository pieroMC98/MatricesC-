#include "Ingeniero.h"

Ingeniero::Ingeniero(string n, float x) : Persona(n) {
	this->stress = x;
}

Ingeniero::~Ingeniero() { std::cout << "Ingeniero en paro" << std::endl; }

void Ingeniero::issad() { std::cout << "criping in depression" << std::endl; }
