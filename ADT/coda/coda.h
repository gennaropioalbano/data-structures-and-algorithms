#include <stdbool.h>
#include "int.h"

typedef struct Nodo {
	Item item;
	struct Nodo* next;
} Nodo;

typedef struct Coda {
	int size;
	Nodo* head;
	Nodo* tail;
} Coda;

Coda creaCoda ();
bool isEmptyCoda (Coda coda);
void enqueue (Coda* coda, Item item);
void dequeue (Coda* coda);