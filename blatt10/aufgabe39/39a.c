#include <string.h>

int safecpy(char **t, char *s)
{
        size_t size1, size2;
        size1 = strlen(*t);
        size2 = strlen(s);
        if (size1 > ++size2) {
                strcpy(*t, s);
                return 1;
        }
        *t = calloc(size2, sizeof(*s));
        if (*t)
                strcpy(*t, s);
        return *t == NULL ? *t : 1;
}
