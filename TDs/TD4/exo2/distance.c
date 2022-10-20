#include <stdio.h>
#include <math.h>
 
double distance(double a , double b , double c, double d) {
    double x_diff = fabs(c - a);
    double y_diff = fabs(d - b);
   return sqrt( x_diff*x_diff + y_diff*y_diff );
}



int main() {
    printf("distance = %f \n" , distance(3 ,2 , 5 , 6));
    return 0;
}