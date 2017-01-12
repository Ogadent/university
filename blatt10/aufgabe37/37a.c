#include <stdio.h>
#include <stdlib.h>

int *cpy_array(int v[], int size);

int main(void)
{
    int v[] = {1, 2, 3};
    unsigned int i;
    int* a = cpy_array(v, sizeof(v) / sizeof(int));
    if (a == NULL) {
        printf("bad_alloc");
        return 1;
    }
    for (i = 0; i < (sizeof(v) / sizeof(int)); i++) {
        printf("%i\n", *(a + i));
    }
    return 0;
}

int *cpy_array(int v[], int size)
{
    int i;
    int *a;
    a = calloc(size, sizeof(int));
    if (a == NULL) {
        return NULL;
    }
    for (i = 0; i < size; i++) {
        *(a + i) = v[i];
    }
    return a;
}
