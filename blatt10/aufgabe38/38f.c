#include <stdlib.h>

int main(void)
{
        int *v[10], i, j;
        for (i = 0; i < 10; ++i) {
                v[i] = calloc(30, sizeof(int));
                if (v[i] == NULL)
                        for (j = 0; j < i; j++) {
                                free(v[j]);
                        }
                        free(v);
                        return 1;
        }
        for (i = 0; i < 10; ++i)
        free(v[i]);
        free(v);
        return 0;
}
