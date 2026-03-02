#include <stdio.h>
#include "array.h"

int main () {
	int n = 5;
	int a[n];
	int b[n];

	printf ("Immetti %d elementi nell'array a:\n", n);
	input_array (a, n);

	printf ("Immetti %d elementi nell'array b:\n", n);
	input_array (b, n);

	printf ("Array a:\n");
	output_array (a, n);

	printf ("Array b:\n");
	output_array (b, n);

	printf ("Somma array a: %d\n", sum_array (a, n));
	printf ("Somma array b: %d\n", sum_array (b, n));

	int res[n];
	sum_arrays (a, b, res, n);
	output_array (res, n);

	printf ("Prodotto scalare array a e b: %d\n", dot_product (a, b, n));

	return 0;
}