#include <stdio.h>
#include "utils.h"

void input_array (int a[], int n) {
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
}

void output_array (int a[], int n) {
	for (int i = 0; i < n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
}

int find_element (int a[], int elem, int n) {
	for (int i = 0; i < n; i++)
		if (a[i] == elem)
			return i;
	return -1;
}

int find_min (int a[], int n) {
	int min = 0;
	for (int i = 1; i < n; i++)
		if (a[i] < a[min])
			min = i;
	return min;
}

void selection_sort (int a[], int n) {
	int min = 0;
	for (int i = 0; i < n; i++) {
		min = find_min (a + i, n - i) + i;
		swap (&a[i], &a[min]);
	}
}

void remove_element (int a[], int elem, int* n) {
	int pos_elem = find_element (a, elem, *n);
	if (pos_elem == -1)
		return;
	for (int i = pos_elem; i < *n - 1; i++)
		a[i] = a[i + 1];
	(*n)--;
}

void insert_element (int a[], int elem, int pos, int* n) {
	(*n)++;
	for (int i = *n - 1; i > pos; i--)
		a[i] = a[i - 1];
	a[pos] = elem;
}

int sum_array (int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

void sum_arrays (int a[], int b[], int res[], int n) {
	for (int i = 0; i < n; i++)
		res[i] = a[i] + b[i];
}

int dot_product (int a[], int b[], int n) {
	int prod = 0;
	for (int i = 0; i < n; i++)
		prod += a[i] * b[i];
	return prod;
}