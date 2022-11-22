struct nodo{
    int valor;
    struct nodo* izq;
    struct nodo* der;
		int altura;
} typedef nodo;

nodo* creanodo(int val);
void preorden(nodo* n);
void preordenaltura(nodo* n);

void inorden(nodo* n);
void postorden(nodo* n);
void mostrar_nivel(nodo* n, int nivel);

void definiraltura(nodo* n, int nivel);
void insertar_abo(nodo* n, int valor_a_insertar);
void insertar_abo2(nodo* n, int valor_a_insertar);