#include <stdio.h>

int main()
{
        char c;
        int result;
        result = scanf("%c%c%c", &c, &c, %c);
        if(result != 3 || getchar() != '\n'){
                printf("Die EIngabe war nicht erfoglreich.");
        }else{
                printf("Die EIngabe war erfoglreich.");
        }
}
