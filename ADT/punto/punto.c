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

void sposta_punto (Punto* p, float dx, float dy) {
	p -> x += dx;
	p -> y += dy;
}

Punto centroide (Punto a[], int n) {
	float sum_x = 0.0, sum_y = 0.0;
	if (n <= 0) {
        return creaPunto(0.0, 0.0);
    }
	for (int i = 0; i < n; i++) {
		sum_x += a[i].x;
		sum_y += a[i].y;
	}
	float media_x = sum_x / n;
	float media_y =  sum_y / n;
	return creaPunto (media_x, media_y);
}

int coppie_sotto_distanza (Punto a[], int n, float d) {
	int counter = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (distanza (a[i], a[j]) < d)
				counter++;
	return counter;
}

float distanza_massima (Punto a[], int n) {
	float max = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			float d = distanza (a[i], a[j]);
			if (d > max)
				max = d;
		}
	return max;
}