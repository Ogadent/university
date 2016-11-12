#include <stdio.h>

int main()
{
        int x, result;
        result = scanf("%i", &x);
        if((!result || getchar() != '\n') || x < 1 || x > 12){
                printf("Die Eingabe war nicht erfoglreich.");
        }else{
                printf("Die Eingabe war erfoglreich.");
        }
        return 0;
}
