#include "root.h"


double* roots(double a, double b, double c){
    double* root=(double*)malloc(2*sizeof(double));
    root[0]=(-b+sqrt(b*b-4*a*c))/(2*a);
    root[1]=(-b-sqrt(b*b-4*a*c))/(2*a);
    return root;
}
