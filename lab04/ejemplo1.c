#include <stdio.h>
#include <string.h>
#define MAX_CHARS 99999

int main () {
	FILE* f;
	f = fopen("archivo_lineas.txt", "r");
	char texto[MAX_CHARS];
	int contador_lineas = 0;
	
	while( fgets(texto, 10, f) !=NULL ){
		contador_lineas++;
		
		printf("*%d %s \n", (int)strlen(texto), texto ); //imprimimos la linea
		
	}
	
	return(0);
}
