#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "int.h"

typedef struct Nodo {
	Item value;
	struct Nodo* next;
} Nodo;

typedef struct Lista {
	int size;
	Nodo* head;
} Lista;

Lista newList () {
	Lista l;
	l.size = 0;
	l.head = NULL;
	return l;
}

bool isEmpty (Lista* lista) {
	return (lista -> size == 0);
}

void insertHead (Lista* lista, Item value) {
	Nodo* n = (Nodo*) malloc (sizeof (Nodo));
	n -> value = value;
	n -> next = lista -> head;
	lista -> head = n;
	lista -> size++;
}

void removeHead(Lista* lista) {
	if (isEmpty (lista))
		return;
	Nodo* temp = lista -> head;
	lista -> head = temp -> next;
	free (temp);
	lista -> size--;
}

Item getFirst (Lista* lista) {
	if (isEmpty (lista))
		return -1;

	return lista -> head -> value;
}

void sort_list (Lista* lista) {
	for (Nodo* p = lista -> head; p != NULL; p = p -> next)
		for (Nodo* min = p -> next; min != NULL; min = min -> next)
			if (confronto (p -> value, min -> value) > 0) {
				Item temp = p -> value;
				p -> value = min -> value;
				min -> value = temp;
			}
}