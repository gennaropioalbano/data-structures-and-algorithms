#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "int.h"
#include "stack.h"

Stack creaStack () {
	Stack stack;
	stack.size = 0;
	stack.top = NULL;
	return stack;
}

bool isEmptyStack (Stack stack) {
	return (stack.size == 0);
}

void push (Stack* stack, Item item) {
	Nodo* nodo = (Nodo*) malloc (sizeof (Nodo));
	nodo -> item = item;
	nodo -> next = stack -> top;
	stack -> top = nodo;
	stack -> size++;
}

void pop (Stack* stack) {
	if (stack -> top == NULL)
		return;
	Nodo* temp = stack -> top;
	stack -> top = temp -> next;
	free (temp);
	stack -> size--;
}

Item top (Stack stack) {
	if (stack.top == NULL)
		exit (1);
	return stack.top -> item;
}