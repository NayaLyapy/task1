#include <stdio.h>
#include <math.h>

int square(double a, double b, double c, double* k)
{

   if (a == 0 && b!=0){
        k[0]=(-c/b);
    return 1;
}
    if (a == 0 && b==0){
    return 0;
}

    double d;

    d=b*b-4*a*c;

    if(d>0){

        k[0] = (-b+sqrt(d))/(2*a);
        k[1] = (-b-sqrt(d))/(2*a);
       
       return 2;

    }

   else {
    if(d==0){
        k[0] = (-b)/(2*a);
    return 1;
     }
   

    }

    return 0;

}
