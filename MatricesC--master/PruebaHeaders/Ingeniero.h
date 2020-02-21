#include "Persona.h"
class Ingeniero : public Persona {
       private:
	float stress;
       public:
	Ingeniero(string,float);
	~Ingeniero();
	void issad();
};
