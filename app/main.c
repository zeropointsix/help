#include <stdio.h>


#include "root.h"


int main()
{
    double* ans = roots(1, -4, 3);
    printf("%f\n", ans[0]);
    printf("%f\n", ans[1]);
    free(ans);
    return 0;
}
