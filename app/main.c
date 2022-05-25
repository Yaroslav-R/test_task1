#include <stdio.h>
#include "myfunc.h"

int main()
{
    float x1 = 0;
    float x2 = 0;
    int cnt = solve(1, 2, -3, &x1, &x2);
    printf("x*x + 2x - 3 = 0 has %d roots:\n%f and %f\n", cnt, x1 ,x2);
    return 0;
}
