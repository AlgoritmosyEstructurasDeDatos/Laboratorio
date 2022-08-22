struct Lista {
  int largo;
  int items[1000];
} typedef Lista;

void MostrarLista(Lista *l);
void append(Lista *l, int valor);
void agregar_al_inicio(Lista *l, int valor);

// TAREA
void Eliminar_Al_Final(Lista *l);
void Eliminar_al_principio(Lista *l); // requiere desplazar los siguientes
int index(Lista *l,
          int val); // retorna el indice en el cual se encuentra el valor val
                    // buscado. Si no existe en la lista, retorna -1