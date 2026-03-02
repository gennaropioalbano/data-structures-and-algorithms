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

	int n = 5;
	Punto a[n];

	a[0] = creaPunto (0.0, 0.0);
	a[1] = creaPunto (2.0, 1.0);
	a[2] = creaPunto (4.0, 3.0);
	a[3] = creaPunto (-1.0, 2.0);
	a[4] = creaPunto (3.0, -2.0);

	Punto c = centroide (a, n);
	printf ("Centroide: x = %.2f, y = %.2f\n", c.x, c.y);

	int d = 3;
	printf ("Numero coppie sotto distanza %d: %d\n", d, coppie_sotto_distanza (a, n, d));
}