#include <stdlib.h>

struct AB {
  char simbolo;
  struct AB *izq;
  struct AB *der;
} typedef AB;

AB *creaNodo(char S);
AB *creaABMorse();

void preorden(AB* T);
void inorden(AB* T);
void posorden(AB* T);

void RecorridoHorrible(AB* T);

