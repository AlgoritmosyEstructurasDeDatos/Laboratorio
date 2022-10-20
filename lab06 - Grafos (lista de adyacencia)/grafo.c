#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>

Grafo *Crear_Grafo(int cantidad_nodos) {
  Grafo *G = (Grafo *)malloc(sizeof(Grafo));
  G->Cantidad_Nodos = cantidad_nodos;
  G->Cantidad_Aristas = 0;
  G->lista_adyacencia = (Lista *)malloc(sizeof(Lista) * cantidad_nodos);
  for (int i = 0; i < cantidad_nodos; i++) {
    G->lista_adyacencia[i] = *Crear_Lista();
  }
  printf("Grafo creado\n\n");
  return G;
}

void Insertar_Arista(Grafo *G, int nodo1, int nodo2){
	// G->lista_adyacencia[nodo1]   <-- esto es una lista!!
	Insertar_Al_Final(&G->lista_adyacencia[nodo1], nodo2);
	Insertar_Al_Final(&G->lista_adyacencia[nodo2], nodo1);

	G->Cantidad_Aristas = G->Cantidad_Aristas+1;
}

void Mostrar_Grafo(Grafo *G){
	printf("Mostrando el grafo de %d nodos y %d aristas\n", G->Cantidad_Nodos, G->Cantidad_Aristas);
	for(int i=0; i<G->Cantidad_Nodos; i++){
		printf("Nodo %d: ", i);
		Mostrar_Lista(&G->lista_adyacencia[i]);
	}	
}

void Crear_Grafo_desde_Archivo(Grafo* G, char nombre_archivo[]){
	// Leer el archivo
	// Crea un grafo con la cantidad de nodos que aparecen en el archivo
	// Crear una arista por cada uno de las aristas del archivo
}