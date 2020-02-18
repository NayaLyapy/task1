#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, x1, x2, d;
	printf("Введите коэффиценты: a, b, c  ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d < 0) {
		printf("Вещестенных корней нет! ");
	}

	if (d == 0) {
		x1 = x2 = (-b + sqrt(d)) / (2 * a);
		printf("%lf", x1);
		printf("%lf", x2);


	}

	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	printf("%lf %lf %lf ", x1, x2, d);
}
