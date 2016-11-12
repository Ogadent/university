#include <stdio.h>

int main()
{
        double d;
        int result;
        result = scanf("%lf", &d);
        if(!result || getchar() != '\n'){
                printf("Die Eingabe war nicht erfolgreich.");
        }else{
                printf("Die Eingabe war erfolgreich.");
        }
        return 0;
}
