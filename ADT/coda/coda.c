#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "int.h"
#include "coda.h"

Coda creaCoda () {
	Coda coda;
	coda.size = 0;
	coda.head = NULL;
	coda.tail = NULL;
	return coda;
}

bool isEmptyCoda (Coda coda) {
	return (coda.size == 0);
}

void enqueue (Coda* coda, Item item) {
	Nodo* nodo = (Nodo*) malloc (sizeof (Nodo));
	nodo -> item = item;
	nodo -> next = NULL;
	if (coda -> tail == NULL) {
		coda -> head = nodo;
		coda -> tail = nodo;
	} else {
		coda -> tail -> next = nodo;
		coda -> tail = nodo;
	}
	coda -> size++;
}

void dequeue (Coda* coda) {
	if (coda -> head == NULL)
		return;
	Nodo* temp = coda -> head;
	coda -> head = temp -> next;
	if (coda -> head == NULL)
		coda -> tail = NULL;
	free (temp);
	coda -> size--;
}