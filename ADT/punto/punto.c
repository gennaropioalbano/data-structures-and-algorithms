#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Punto;

Punto creaPunto (float x, float y) {
	Punto p;
	p.x = x;
	p.y = y;
	return p;
}

float ascissa (Punto p) {
	return p.x;
}

float ordinata (Punto p) {
	return p.y;
}

float distanza (Punto p1, Punto p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}