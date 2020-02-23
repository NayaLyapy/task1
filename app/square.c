#include <stdio.h>
#include "myfunc.h"
#include <math.h>

 int main() {

     struct pair square(doable a, double b, double c){
	 double d = b*b - 4*a*c;
	 double x1 = (-b+sqrt(d))/(2*a);
	 double x2 = (-b-sqrt(d))/(2*a);

	 struct pair l;
	 l.x=x1;
	 l.y=x2;
	 return l;
    }
    
