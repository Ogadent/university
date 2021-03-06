#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int read_ldouble();
int flush_buff();

int main()
{
    long double x, *p;
    p = &x;
    switch (read_ldouble(p)) {
        case 1: printf("Ungültige Eingabe");
        return 1;
        case EOF: printf("Lesefehler");
        return EOF;
        default: printf("Eingabe erfolgreich");
        return 0;
    }
}

int read_ldouble(long double *p)
{
    long double x;
    if (scanf("%Lf", &x) != 1 || getchar() != '\n' || getchar() == EOF) {
        if (flush_buff() == 1) return 1;
        return EOF;
    }
    *p = x;
    return 0;
}

int flush_buff()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    return c != EOF;
}
