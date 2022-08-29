#include "cola.h"
#include <stdio.h>
#include <stdlib.h>

// Funcion crea un nodo con el dato solicitado. Puntero sgte apunta a null
Nodo *Crear_Nodo(int valor) {
  Nodo *nodo_creado = (Nodo *)malloc(sizeof(Nodo));
  nodo_creado->siguiente = NULL;
  nodo_creado->dato = valor;
  return nodo_creado;
}

// Crea una cola vacia (reservar memoria para la cola y apuntar todo a null)
Cola *Crear_Cola() {
  Cola *cola_vacia = (Cola *)malloc(sizeof(Cola));
  cola_vacia->largo = 0;
  cola_vacia->inicio = NULL;
  cola_vacia->final = NULL;
  printf("Cola Creada... \n");
  return cola_vacia;
}

void Insertar(Cola *C, int dato) {
  Nodo *nodo = Crear_Nodo(dato);
  // cuando la cola está vacia
  if (C->inicio == NULL) { // solo si la cola esta vacia debo configurar el inicio y fin hacia el nodo
    C->inicio = nodo; 
    C->final = nodo;
  } else { 
    C->final->siguiente = nodo;
    C->final = nodo;
  }
  C->largo = C->largo + 1;
}

int Extraer(Cola *C) {
  if (C->inicio == NULL) {
    printf("La cola esta vacia");
    return 0;
  } else {
    Nodo *elemento = C->inicio;
    int dato = elemento->dato;

    C->inicio = C->inicio->siguiente;
    if (C->largo == 1) {
      C->final = NULL;
    }
    free(elemento);
    C->largo = C->largo - 1;
    return dato;
  }
}

void Mostrar_Cola(Cola *C) {
  Nodo *p = C->inicio; // nos posicionamos
  if (p == NULL) {
    printf("La cola esta vacia\n");
  }
  while (p != NULL) {
    printf("%d, ", p->dato);
    p = p->siguiente;
  }
  printf("\n");
}

/*
TAREA:
Complete las siguientes funciones

void Insertar_en_n(Cola* C, int dato, int posicion)
void Insertar_al_inicio(Cola* C, int dato)
int Extraer_del_final(Cola* C)  // extraer del final
void Eliminar_en_n(Cola*C, int pos) // elimina a un elemento de la cola
*/
