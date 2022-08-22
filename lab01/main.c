#include <stdio.h>


int main(void) {
  //int arr[10]; 
  int* arr; 
  arr = (int*)malloc(10*sizeof(int));
  
  arr[0] = 99;
  arr[1] = 98;
  arr[2] = 97;

  printf("arr %p\n", arr);
  printf("&arr %p\n", &arr);
  printf("arr[0] %d\n", arr[0]);
  printf("&arr[0] %p\n\n", &arr[0]);

  printf("valor %d \n", *(arr+12) );

  free(arr);

  //TAREA:
  Declare un arreglo de 100 elementos usando malloc y lo llene con los numeros de la serie de fibonacci.
  Luego, imprima los primeros 20;
  Luego libere la memoria de ese arreglo.
  
  

  // arr es un puntero al primer elemento del arreglo
  
  /*
  int variable; // memoria dinamica de stack: la memoria se libera automaticamente al CERRAR EL ÁMBITO
  
  int* ptr;  // memoria dinamica de heap: la memoria se puede liberar en cualquier punto del programa pero se debe liberar manualmente.

  ptr = (int*) malloc(sizeof(int)); //CASTEO (coercion explicita) a tipo int* 
  *ptr = 99;

    
  printf("ptr %p\n", ptr);
  printf("*ptr %d\n", *ptr);
  printf("&ptr %d\n", &ptr);

  free(ptr);
  */
  
  
  return 0;
}
