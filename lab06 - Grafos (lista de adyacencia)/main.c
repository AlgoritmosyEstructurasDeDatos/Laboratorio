#include "grafo.h"
#include <stdio.h>

int main(void) {

  /*
  Lista* L = Crear_Lista();

  Insertar_Al_Final(L, 1);
  Insertar_Al_Final(L, 2);
  Insertar_Al_Final(L, 3);

  Mostrar_Lista(L);
  */
  Grafo *G = Crear_Grafo(6);
	Insertar_Arista(G, 0, 1);
	Insertar_Arista(G, 1, 2);
	Insertar_Arista(G, 2, 3);
	Insertar_Arista(G, 4, 3);
	Insertar_Arista(G, 3, 5);
	Insertar_Arista(G, 3, 0);
	Insertar_Arista(G, 0, 5);
	Insertar_Arista(G, 5, 4);
	Insertar_Arista(G, 1, 4);
	Insertar_Arista(G, 4, 2);
	Insertar_Arista(G, 5, 1);
	Mostrar_Grafo(G);

  return 0;
}

/*
6
0 1
1 2
2 3
4 3
3 5
3 0
0 5
5 4
1 4
4 2
5 1*/