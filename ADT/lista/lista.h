#include <stdbool.h>
#include "item.h"

typedef struct Nodo {
	Item value;
	struct Nodo* next;
} Nodo;

typedef struct Lista {
	int size;
	Nodo* head;
} Lista;

Lista newList ();
bool isEmpty (Lista* lista);
void insertHead (Lista* lista, Item value);
void removeHead(Lista* lista);
Item getFirst (Lista* lista);