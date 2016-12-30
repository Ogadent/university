#include <stdio.h>
#include <string.h>

int main()
{
    char satz[] = "Die naechste Vorlesung ist am 9.1.2017, 10.00 Uhr, im HS 1 (Bau C)";
    char delimiter[] = " ,()";
    char* ptr = strtok(satz, delimiter);

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, delimiter);
    }
    return 0;
}
