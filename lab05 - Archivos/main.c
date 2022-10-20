#include <stdio.h>
#include <string.h>

int main(void) {
  /*
char variable[999999] = "hola amigos";

  //variable = "chao amigos fue un gusto"; // no funciona
  variable[0] = 'c';
  variable[1] = 'h';
  variable[2] = 'a';

  strcpy(variable, "hola amigos como estan");

  printf("El var tiene %s y el largo es %ld\n", variable, strlen(variable));

  for(int i=0; i<strlen(variable); i++ ){
          printf("char: %c\n", variable[i]);
  }
  */
  /*
  FILE* archivo;
  archivo = fopen("lineas.txt", "r");

  //printf("archivo %p", archivo);
  char algo[1000];

  while( fgets(algo, 999999, archivo) != NULL ){
          printf("nueva linea: %s\n", algo);
  }
  */
  /* //si tenemos que leer solo una linea
  FILE* archivo;
  archivo = fopen("input.txt", "r");
  char algo[1000];
  fgets(algo, 999999, archivo);
  printf("El file: %s", algo);
  */

  char charvar[10];
	char nombrearchivo[99];
  int intvar;

  //int a = scanf("%d %s", &intvar, charvar);
	printf("Ingrese nombre archivo:");
	scanf("%s", nombrearchivo );
	printf("Abriendo archivo %s", nombrearchivo);
	FILE* f;
	f = fopen(nombrearchivo, "r");
	if (f)
		printf("Archivo abierto");
	else
		printf("No existe archivo");
  //printf("Los valores ingresados son %d      %s", intvar, charvar);
	//strlen()

		
  return 0;
}