#include "Persona.h"
#include "Ingeniero.h"

int main(int argc, char const *argv[]) {
	Persona *p = new Persona("yo");
	Ingeniero i("tu",99);
	i.issad();
	std::cout << p->getNombre() << std::endl;
	return 0;
}
