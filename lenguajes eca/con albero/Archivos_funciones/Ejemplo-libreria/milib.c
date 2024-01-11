#include "milib.h" //incluyo el header en donde está definido el prototipo de mi función

/* Desarrollo de la función */
float area (float radio)
{
	float resul;
	
	resul = pi * radio * radio; // pi * radio^2
	return resul;
}
