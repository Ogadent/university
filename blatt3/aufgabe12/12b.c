#include <stdio.h>

int main()
{
        int x, result;
        result = scanf("%i.%i", &x, &x);
        if(result != 2 || getchar() != '\n'){
                printf("Die Eingabe war nicht erfoglreich.");
        }else{
                printf("Die Eingabe war erfoglreich.");
        }
        return 0;
}
