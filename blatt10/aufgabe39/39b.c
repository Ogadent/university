#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input[11];
    char *ptr;
    double d;
    scanf("%10s", input);
    d = strtod(input, &ptr);
    printf("Der double Wert betraegt: %f, der nicht umwandelbare Rest ist: %s", d, ptr);
    return 0;
}
