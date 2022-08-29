#include <stdio.h>
#include "cola.h"


int main(void) {
	Cola* suchi = Crear_Cola();
	printf("La cola nueva tiene %d elementos", suchi->largo);
	
	Insertar(suchi, 1);
	Insertar(suchi, 2);
	Insertar(suchi, 3);
	Insertar(suchi, 55);

	Mostrar_Cola(suchi);

	printf("Comenzando extracciones\n");
	int d;
	
	d = Extraer(suchi);
	printf("Extraido el %d ------\n", d); 
	Mostrar_Cola(suchi);
	printf("______________________________\n");

	d = Extraer(suchi);
	printf("Extraido el %d ------\n", d); 
	Mostrar_Cola(suchi);
	printf("______________________________\n");

	d = Extraer(suchi);
	printf("Extraido el %d ------\n", d); 
	Mostrar_Cola(suchi);
	printf("______________________________\n");

	d = Extraer(suchi);
	printf("Extraido el %d ------\n", d); 
	Mostrar_Cola(suchi);
	printf("______________________________\n");

	
	return 0;
}