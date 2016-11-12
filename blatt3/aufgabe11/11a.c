#include <stdio.h>

double my_fabs(double x)
{
        return x < 0 ? -x : x;
}

int main()
{
        double x;
        scanf("%lf", &x);
        x = my_fabs(x);
        printf("%f", x);
}
