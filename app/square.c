#include "myfunc.h"
#include <math.h>

struct pair square(doable a, double c, double b){
	 double d = b*b - 4*a*c;
	 double x1 = (-b+sqrt(d))/(2*a);
	 double x2 = (-b-sqrt(d))/(2*a);

	 struct pair p;
	 p.x=x1;
	 p.y=x2;
	 return p;
    }
    
