#include <stdio.h>
#include "array.h"

int main () {
	int n = 5;
	int a[n];

	printf ("Immetti %d elementi:\n", n);
	input_array (a, n);

	printf ("Array originale:\n");
	output_array (a, n);

	selection_sort(a, n);

	printf ("Array ordinato:\n");
	output_array (a, n);

	printf ("Rimuovo elemento 3\n");
	remove_element (a, 3, &n);
	output_array (a, n);

	printf ("Aggiungo elemento 10 in posizione 3\n");
	insert_element (a, 10, 3, &n);
	output_array (a, n);

	return 0;
}