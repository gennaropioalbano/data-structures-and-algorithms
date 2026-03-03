#include <stdbool.h>
#include "int.h"

typedef struct Nodo {
	Item item;
	struct Nodo* next;	 
} Nodo;

typedef struct Stack {
	int size;
	Nodo* top;
} Stack;

Stack creaStack ();
bool isEmptyStack (Stack stack);
void push (Stack* stack, Item item);
void pop (Stack* stack);
Item top (Stack stack);