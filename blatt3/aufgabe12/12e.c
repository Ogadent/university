#include <stdio.h>

int main()
{
        int x, result;
        char c;
        result = scanf("%i%c", &x, &c);
        if((result != 2 || getchar() != '\n') || x <= 0 || c < 97 || c > 122)){
                printf("Die Eingabe war nicht erfoglreich.");
        }else{
                printf("Die Eingabe war erfoglreich.");
        }
        return 0;
}
