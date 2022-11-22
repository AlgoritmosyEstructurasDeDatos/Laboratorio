#include "arbol_binario.h"
#include <stdio.h>

AB *creaNodo(char S) {
  AB *r = (AB *)malloc(sizeof(AB));
  r->simbolo = S;
  r->izq = NULL;
  r->der = NULL;
  return r;
}
// se llama preorden
void preorden(AB *T) {
  if (T != NULL) {
    printf("%c ", T->simbolo);
    preorden(T->izq);
    preorden(T->der);
  }
}
void inorden(AB *T) {
  if (T != NULL) {
    inorden(T->izq);
    printf("%c ", T->simbolo);
    inorden(T->der);
  }
}
void posorden(AB *T) {
  if (T != NULL) {
    posorden(T->izq);
    posorden(T->der);
    printf("%c ", T->simbolo);
  }
}

void RecorridoHorrible(AB *T) {
  if (T != NULL) {
    printf("%c ", T->simbolo);
    RecorridoHorrible(T->der);
    RecorridoHorrible(T->izq);
  }
}

AB *creaABMorse() {
  AB *T;
  T = creaNodo('#');
  T->izq = creaNodo('E');
  T->der = creaNodo('T');
  T->izq->izq = creaNodo('I');
  T->izq->der = creaNodo('A');
  T->der->izq = creaNodo('N');
  T->der->der = creaNodo('M');
  T->izq->izq->izq = creaNodo('S');
  T->izq->izq->der = creaNodo('U');
  T->izq->der->izq = creaNodo('R');
  T->izq->der->der = creaNodo('W');
  T->der->izq->izq = creaNodo('D');
  T->der->izq->der = creaNodo('K');
  T->der->der->izq = creaNodo('G');
  T->der->der->der = creaNodo('O');
  T->izq->izq->izq->izq = creaNodo('H');
  T->izq->izq->izq->der = creaNodo('V');
  T->izq->izq->der->izq = creaNodo('F');
  T->izq->izq->der->der = creaNodo('#');
  T->izq->der->izq->izq = creaNodo('L');
  T->izq->der->izq->der = creaNodo('#');
  T->izq->der->der->izq = creaNodo('P');
  T->izq->der->der->der = creaNodo('J');
  T->der->izq->izq->izq = creaNodo('B');
  T->der->izq->izq->der = creaNodo('X');
  T->der->izq->der->izq = creaNodo('C');
  T->der->izq->der->der = creaNodo('Y');
  T->der->der->izq->izq = creaNodo('Z');
  T->der->der->izq->der = creaNodo('Q');
  T->der->der->der->izq = creaNodo('#');
  T->der->der->der->der = creaNodo('#');
  T->izq->izq->izq->izq->izq = creaNodo('5');
  T->izq->izq->izq->izq->der = creaNodo('4');
  T->izq->izq->izq->der->der = creaNodo('3');
  T->izq->izq->der->der->izq = creaNodo('#');
  T->izq->izq->der->der->der = creaNodo('2');
  T->izq->der->izq->izq->izq = creaNodo('&');
  T->izq->der->izq->izq->der = creaNodo('#');
  T->izq->der->izq->der->izq = creaNodo('+');
  T->izq->der->der->izq->der = creaNodo('#');
  T->izq->der->der->der->der = creaNodo('1');
  T->der->izq->izq->izq->izq = creaNodo('6');
  T->der->izq->izq->izq->der = creaNodo('=');
  T->der->izq->izq->der->izq = creaNodo('/');
  T->der->izq->der->izq->der = creaNodo('#');
  T->der->izq->der->der->izq = creaNodo('(');
  T->der->der->izq->izq->izq = creaNodo('7');
  T->der->der->izq->izq->der = creaNodo('#');
  T->der->der->izq->der->der = creaNodo(165); // Ñ
  T->der->der->der->izq->izq = creaNodo('8');
  T->der->der->der->der->izq = creaNodo('9');
  T->der->der->der->der->der = creaNodo('0');
  T->izq->izq->der->der->izq->izq = creaNodo('?');
  T->izq->izq->der->der->izq->der = creaNodo('_');
  T->izq->der->izq->izq->der->izq = creaNodo('"');
  T->izq->der->izq->der->izq->der = creaNodo('.');
  T->izq->der->der->izq->der->izq = creaNodo('@');
  T->izq->der->der->der->der->izq = creaNodo(39); // '
  T->der->izq->izq->izq->izq->der = creaNodo('-');
  T->der->izq->der->izq->der->izq = creaNodo(';');
  T->der->izq->der->izq->der->der = creaNodo('!');
  T->der->izq->der->der->izq->der = creaNodo(')');
  T->der->der->izq->izq->der->der = creaNodo(',');
  T->der->der->der->izq->izq->izq = creaNodo(':');

  return T;
}