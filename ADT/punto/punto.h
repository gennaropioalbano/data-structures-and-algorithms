typedef struct {
    float x;
    float y;
} Punto;

Punto creaPunto (float x, float y);
float ascissa (Punto p);
float ordinata (Punto p);
float distanza (Punto p1, Punto p2);

void sposta_punto (Punto* p, float dx, float dy);
Punto centroide (Punto a[], int n);
int coppie_sotto_distanza (Punto a[], int n, float d);