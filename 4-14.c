#include <stdio.h>
//4-14
#define swap(t, x, y) \
	do { \
		t safe ## x ## y; \
		safe ## x ## y = x; \
		x = y; \
		y = safe ## x ## y; \
	} while (0)

int main(void) {
	int ix, iy;
	float dx, dy;
	char *px, *py;

	ix = 10;
	iy = 20;
	swap(int, ix, iy);
	printf("este es el cambio: %d and %d\n", ix, iy);

	dx = 123446616.251;
	dy = 348752.01;
	swap(double, dx, dy);
	printf("este es el cambio: %g and %g\n", dx, dy);

	px = "ciencias";
	py = "computacion";
	swap(char *, px, py);
	printf("este es el cambio: %s and %s\n", px, py);

	return 0;
}
