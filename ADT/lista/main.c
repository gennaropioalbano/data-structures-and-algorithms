#include <stdio.h>
#include "lista.h"

int main () {
	Lista lista = newList ();

	printf ("Inserisci 5 elementi:\n");
	for (int i = 0; i < 5; i++) {
		insertHead (&lista, input ());
	}

	printf ("Lista originale:\n");
	for (Nodo* n = lista.head; n != NULL; n = n -> next) {
		output (n -> value);
		printf (" ");
	}
	printf ("\n");

	sort_list (&lista);
	printf ("Lista ordinata:\n");
	for (Nodo* n = lista.head; n != NULL; n = n -> next) {
		output (n -> value);
		printf (" ");
	}
	printf ("\n");

	return 0;
}