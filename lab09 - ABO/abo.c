#include "abo.h"
#include <stdio.h>
#include <stdlib.h>

nodo *creanodo(int val) {
  nodo *a = (nodo *)malloc(sizeof(nodo));
  a->valor = val;
  a->izq = NULL;
  a->der = NULL;
	a->altura = 1;
  return a;
}
void preorden(nodo *n) {
  if (n != NULL) {
    printf("%d, ", n->valor);
    preorden(n->izq);
    preorden(n->der);
  }
}
void preordenaltura(nodo *n){
	if (n != NULL) {
    printf("%d altura %d \n", n->valor, n->altura);
    preordenaltura(n->izq);
    preordenaltura(n->der);
  }
}
void inorden(nodo *n) {
  if (n != NULL) {
    inorden(n->izq);
    printf("%d, ", n->valor);
    inorden(n->der);
  }
}

void indesorden(nodo *n){
	if (n != NULL) {
    indesorden(n->der);
    printf("%d, ", n->valor);
    indesorden(n->izq);
  }
}
/*
int obtener_maximo(nodo* n){
	//
	return el valor maximo del abo.
}

int obtener_minimo(nodo* n){
	return el valor minimo en el abo.
}
*/

void actualizarAltura(nodo*n){
	
}
void mostrar_nivel(nodo *n, int nivel) {
  if (n != NULL) {
    printf("nodo %d nivel %d\n", n->valor, nivel);
    mostrar_nivel(n->izq, nivel + 1);
    mostrar_nivel(n->der, nivel + 1);
  }
}
/*
TAREA: CONSTRUYA UNA FUNCIÒN RECURSIVA QUE DETERMINE LA ALTURA
DE UN ARBOL.
ACA UN EJEMPLO DE UNA FUNCIÒN QUE LO HACER PERO NO RECURSIVA Y
POCO ELEGANTE YA QUE UTILIZA UNA VARIABLE GLOBAL
*/
int altura_maxima = 0;
void definiraltura(nodo *n, int nivel) {
  if (n != NULL) {
    if (nivel > altura_maxima)
      altura_maxima = nivel;
    definiraltura(n->izq, nivel + 1);
    definiraltura(n->der, nivel + 1);
  }
}
// n es la raiz
void insertar_abo(nodo *n, int valor_a_insertar) {
	/*
  if (n->valor < valor_a_insertar) {
    if (n->der == NULL) {
      n->der = creanodo(valor_a_insertar);
    } else {
      insertar_abo(n->der, valor_a_insertar);
    }
  } else {
    if (n->izq == NULL) {
      n->izq = creanodo(valor_a_insertar);
    } else {
      insertar_abo(n->izq, valor_a_insertar);
    }
  }
*/
}

void insertar_abo2(nodo *n, int valor_a_insertar){
	printf("INSERTANDO %d en %d\n", valor_a_insertar, n->valor);
	if(valor_a_insertar > n->valor){
		if(n->der == NULL){
			n->der = creanodo(valor_a_insertar);
		}
		else {
			insertar_abo2(n->der , valor_a_insertar);
		}		
	}
	else {// si es menor o igual
		if(n->izq == NULL){
			n->izq = creanodo(valor_a_insertar);
		}
		else {
			insertar_abo2(n->izq, valor_a_insertar);
		}
	}
	printf("SALIENDO DE %d en %d\n", valor_a_insertar, n->valor);
	//actualizarAltura();
	if(n->izq==NULL && n->der == NULL)
		n->altura = 1;
	else {
		if (n->izq == NULL) n->altura = n->der->altura + 1;
		else if (n->der == NULL) n->altura = n->izq->altura +1;
		else n->altura = maximo(n->izq->altura, n->der->altura) + 1;
	}
}

int maximo(int n1, int n2){
	if(n1>n2) return n1;
	else return n2;
}

/*
void obtener_maximo();
void obtener_minimo();
void buscar_elemento();

// https://personales.unican.es/corcuerp/progcomp/slides/arbol.pdf
*/