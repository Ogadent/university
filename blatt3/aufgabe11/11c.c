#include <stdio.h>

int my_isupper(int c)
{
        return c > 64 && c < 91;
}

int main()
{
        char c;
        scanf("%c", &c);
        printf("%i", my_isupper(c));
        return 0;
}
