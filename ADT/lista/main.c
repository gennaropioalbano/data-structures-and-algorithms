#include <stdio.h>
#include "lista.h"

int main () {
	Lista lista = newList ();

	printf ("Inserisci un valore nella lista:\n");
	insertHead (&lista, input ());
	output (getFirst (&lista));
	printf ("\n");

	printf ("Inserisci un altro valore nella lista:\n");
	insertHead (&lista, input ());
	output (getFirst (&lista));
	printf ("\n");

	removeHead (&lista);
	output (getFirst (&lista));
	printf ("\n");

	return 0;
}