#include <stdio.h>

int main()
{
        int x, c, result;
        result = scanf("%i%c", &x, &c);
        if((result != 2 || getchar() != '\n') && (x > 0 && c > 96 && c < 123)){
                printf("Die Eingabe war nicht erfoglreich.");
        }else{
                printf("Die Eingabe war erfoglreich.");
        }
        return 0;
}
