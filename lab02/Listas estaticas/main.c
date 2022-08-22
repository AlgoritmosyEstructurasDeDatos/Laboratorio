#include <stdio.h>
#include "lista.h"

// Vamos a programar una estructura de datos llama lista que será implementada como arreglo. En ella, almacenaremos datos y asociaremos ciertas operaciones propias de una lista (como las listas de python)

/*
// realiza paso por valor: es decir, los argumentos son una copia de la entrada
int f1(int arg1){
	printf("La direccion de memoria de arg1 es %p \n", &arg1);
	arg1 += 10000;
	return arg1;
}
// paso por referencia: los argumentos son una referencia de la entrada
int f2(int* arg1){
	printf("La direccion de memoria de arg1 es %p \n", arg1);
	*arg1 += 10000;
	return 2;	
}
*/

int main(void) {
	/*
	int v = 9;
	printf("La direccion de memoria de v es %p\n", &v);
	f1(v);
	printf("el valor es %d \n", v);

	f2(&v);
	printf("el valor es %d \n", v);
	*/
	
  Lista l;
	l.largo = 0;
	
	append(&l, 5);
	append(&l, 10);
	append(&l, 15);
	append(&l, 100);
	append(&l, 125);

	MostrarLista(&l);

	printf("Agregando un valor\n");
	agregar_al_inicio(&l, 99);

	MostrarLista(&l);

	
	
  return 0;
}