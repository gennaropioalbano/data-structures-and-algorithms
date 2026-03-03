#include <stdio.h>

typedef int Item;

Item input () {
	Item x;
	scanf ("%d", &x);
	return x;
}

void output (Item x) {
	printf ("%d", x);
}

int confronto (Item a, Item b) {
	if (a < b)
		return -1;
	else if (a > b)
		return 1;
	else
		return 0;
}