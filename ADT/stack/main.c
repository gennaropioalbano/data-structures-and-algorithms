#include <stdio.h>
#include "int.h"
#include "stack.h"

int main () {
	Stack stack = creaStack ();

	printf ("Inserisci 5 elementi nello stack:\n");
	for (int i = 0; i < 5; i++) {
		push (&stack, input ());
	}
	printf ("\n");

	printf ("Stack originale:\n");
	for (Nodo* nodo = stack.top; nodo != NULL; nodo = nodo -> next) {
		output (nodo -> item);
	}
	printf ("\n");

	return 0;
}