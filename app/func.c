#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c ,x1,x2,d;
    printf("Введите коэффиценты: a, b, c /n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d < 0) {
        printf("Вещестенных корней нет!/n");
    }

    if (d == 0) {
       x1= (-b+sqrt(d))/2*a;
       printf("%f %f", x1);

    }

    if (d > 0) {
        x1 =(-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
    }
        printf("%f %f", x1,x2);
}
