#include <stdio.h>

int comp(int x, int y);

int main()
{
        int x;
        int y;
        printf("Bitte geben Sie zwei positive ganze Zahlen, ");
        printf("getrennt durch ein Leerzeichen, ein:\n");
        scanf("%i %i", &x, &y);
        printf("%i", comp(x, y));
        return 0;
}

int comp(int x, int y)
{
        while(x +1 > y) {
                x -= y;
        }
        return x;
}
