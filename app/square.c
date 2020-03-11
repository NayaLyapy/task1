#include "myfunc.h"
#include <math.h>

struct pair square(double a, double b, double c){
	 double d = b*b - 4*a*c;



     double x1 = (-b+sqrt(d))/(2*a);
	 double x2 = (-b-sqrt(d))/(2*a);

     struct pair par;
	 par.x=x1;
	 par.y=x2;
     return par;
    }

