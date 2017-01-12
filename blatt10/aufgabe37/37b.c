#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *safecat(char *s, const char *ct);

int main(void)
{
    char satz1[] = "Twin";
    char satz2[] = "Peaks";
    char *ptr = safecat(satz1, satz2);
    if (ptr == NULL) {
        printf("bad_alloc");
        return 1;
    }
    printf(ptr);
    return 0;
}

char *safecat(char *s, const char *ct)
{
    size_t size1, size2;
    char *ptr;
    size1 = strlen(s);
    size2 = strlen(ct);
    ptr = calloc(size1 + size2 + 1, 1);
    if (!ptr)
        return ptr;
    strcat(ptr, s);
    strcat(ptr, ct);
    return ptr;
}
