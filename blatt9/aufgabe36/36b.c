#include <stdio.h>
#include <string.h>

int main()
{
    char satz1[] = "Die naechste Vorlesung ist am 9.1.2017, 10.00 Uhr, im HS 1 (Bau C)";
    char satz2[] = "Heute ist der 22.12.2016";
    char delimiter[] = "2016";
    if(strstr(satz1, delimiter)){
        printf("In dem Satz \"%s\" kommt der Satz \"%s\" vor.", satz1, delimiter);
    }
    if(strstr(satz2, delimiter)){
        printf("In dem Satz \"%s\" kommt der Satz \"%s\" vor.", satz2, delimiter);
    }
    return 0;
}
