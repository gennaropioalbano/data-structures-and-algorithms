#include <stdio.h>
#include "punto.h"

int main () {
	Punto p1 = creaPunto (2.0, 3.0);
	Punto p2 = creaPunto (5.0, 7.0);

	printf ("Punto 1\n");
	printf ("Ascissa: %.2f\n", ascissa (p1));
	printf ("Ordinata: %.2f\n", ordinata (p1));

	printf ("Punto 2\n");
	printf ("Ascissa: %.2f\n", ascissa (p2));
	printf ("Ordinata: %.2f\n", ordinata (p2));

	printf ("Distanza tra punto 1 e punto 2: %.2f\n", distanza (p1, p2));
}