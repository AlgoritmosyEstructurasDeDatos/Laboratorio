#include "abo.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  nodo *abo = creanodo(99);
	
  insertar_abo2(abo, 7);
  insertar_abo2(abo, 10);
  insertar_abo2(abo, 3);
  insertar_abo2(abo, 8);
  insertar_abo2(abo, 6);
  insertar_abo2(abo, 4);
  insertar_abo2(abo, 9);
  insertar_abo2(abo, 5);
  insertar_abo2(abo, 3);

  inorden(abo);

	printf("\n");
	indesorden(abo);

  //printf("\npreorden\n");
  //preorden(abo);

  // printf("\n\nALTURA %d", altura(raiz, 0));
  //mostrar_nivel(abo, 0);

  //definiraltura(abo, 1);
  //extern int altura_maxima;
  //printf("La altura del arbol es %d", altura_maxima);
	
  return 0;
}