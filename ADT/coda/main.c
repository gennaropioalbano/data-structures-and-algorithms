#include <stdio.h>
#include "int.h"
#include "coda.h"

int main () {
	Coda coda = creaCoda ();

	printf ("Inserisci 5 elementi nella coda:\n");
	for (int i = 0; i < 5; i++) {
		enqueue (&coda, input ());
	}
	printf ("\n");

	printf ("Coda originale:\n");
	for (Nodo* n = coda.head; n != NULL; n = n -> next) {
		output (n -> item);
	}
	printf ("\n");

	dequeue (&coda);
	printf ("Coda con primo elemento eliminato:\n");
	for (Nodo* n = coda.head; n != NULL; n = n -> next) {
		output (n -> item);
	}
	printf ("\n");
}