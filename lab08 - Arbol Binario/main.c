#include <stdio.h>
#include "arbol_binario.h"

int main(void) {
  /*
	FILE* f;
	f = fopen("archivo_escrito.txt", "w");
	fprintf(f, "%s","hola");
	fclose(f);
	*/
	AB prueba;
	prueba.simbolo = 'P';
	prueba.izq = NULL;
	prueba.der = NULL;

	AB* morse = creaABMorse();

	//printf("%c\n", morse->izq->izq->simbolo );
	//printf("%c\n", morse->der->der->simbolo );
	//printf("%c\n", morse->der->der->izq->der->der->simbolo);

	//RecorridoHorrible(morse);
	posorden(morse);
	
  return 0;
}