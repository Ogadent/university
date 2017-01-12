#include <stdlib.h>
#include <string.h>

int main(void)
{
        char *s, *t;
        s = malloc(30 * sizeof(char));
        if (s == NULL)
                return 1;
        t = malloc(30 * sizeof(char));
        if (t == NULL)
                free(s);
                return 1;
        strcpy(s, "Six Feet");
        strcpy(t, "Under");
        strcat(s, t);
        free(s);
        free(t);
        return 0;
}
