#include "root.h"


double* roots(double a, double b, double c){
    double* root=(double*)malloc(3*sizeof(double));
    
    if( (b*b-4*a*c) < 0 ){
        root[0] = 0;
    }
    
    if( (b*b-4*a*c) == 0 ){
        root[0] = 1;
        root[1]=(-b+sqrt(b*b-4*a*c))/(2*a);
        root[2]=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    
    if( (b*b-4*a*c) > 0 ){
        root[0] = 2;
        root[1]=(-b+sqrt(b*b-4*a*c))/(2*a);
        root[2]=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    
    return root;
}
