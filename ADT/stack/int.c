#include <stdio.h>
#include "int.h"

Item input () {
	Item item;
	scanf ("%d", &item);
	return item;
}

void output (Item item) {
	printf ("%d ", item);
}