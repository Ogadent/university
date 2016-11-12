#include <stdio.h>

int my_tolower(int c)
{
        return c > 64 && c < 91 ? c + 32 : c;
}

int main()
{
        char c;
        scanf("%c", &c);
        c = my_tolower(c);
        printf("%c", c);
        return 0;
}
