#include <stdio.h>

int main()
{
        int x, y, result;
        result = scanf("%i.%i", &x, &y);
        if(result != 2 || getchar() != '\n'){
                printf("Die EIngabe war nicht erfoglreich.");
        }else{
                printf("Die EIngabe war erfoglreich.");
        }
        return 0;
}
