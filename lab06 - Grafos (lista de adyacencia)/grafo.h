#include "lista.h"

struct Grafo {
  int Cantidad_Nodos;
  int Cantidad_Aristas;
  Lista *lista_adyacencia; // es un arreglo dinamico
  // Lista lista_adyacencia[100];
} typedef Grafo;

Grafo *Crear_Grafo(int cantidad_nodos);
void Insertar_Arista(Grafo *G, int nodo1, int nodo2);
void Mostrar_Grafo(Grafo *G);