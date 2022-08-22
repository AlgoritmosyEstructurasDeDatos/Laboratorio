#include <stdio.h>
#include "complex.h"
// Estructura : struct - Nos permite definir un tipo de dato COMPUESTO basado en una colección o agrupamiento de datos. 

// Implementación de una lista utilizando un arreglo




int main(void) {
	Complex variable1; // variable automatica	de stack
	variable1.r = 10;
	variable1.i = 0;

	printf("numero (%.2f,%.2fi)\n", variable1.r, variable1.i);

	
	Complex* puntero1; // variable dinamica de heap
	puntero1 = (Complex*)malloc(sizeof(Complex));

	puntero1->r = 5;
	puntero1->i = 5;

	printf("numero (%.2f,%.2fi)\n", puntero1->r, puntero1->i);
	printf("Tamano de struct complex %d\n", sizeof(Complex));
	printf("Tamano de un float %d \n", sizeof(float));

	
	
	return 0;
}