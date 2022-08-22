#include <stdio.h>
#include "lista.h"

// Mostrar elementos de la lista
void MostrarLista(Lista* l){
	for(int i=0; i<l->largo; i++){
		printf("Elem %d = %d\n", i, l->items[i] );
	}
}

// paso por referencia
void append(Lista* l, int valor){
	l->items[l->largo] = valor;
	l->largo += 1;
}

void agregar_al_inicio(Lista* l, int valor){
	for(int i=l->largo; i>=1; i--){
		l->items[i] = l->items[i-1]; 
	}
	
	l->items[0] = valor;
	l->largo += 1;
}

