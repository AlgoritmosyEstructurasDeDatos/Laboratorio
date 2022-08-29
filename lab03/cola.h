#include "nodo.h"

struct Cola {
  int largo;
  Nodo *final;
  Nodo *inicio;
} typedef Cola;

Nodo *Crear_Nodo(int valor);
Cola *Crear_Cola();
void Insertar(Cola *C, int dato);
int Extraer(Cola *C);
void Mostrar_Cola(Cola *C);