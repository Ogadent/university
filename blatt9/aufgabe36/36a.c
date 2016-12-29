#include <stdio.h>
#include <string.h>

void remove_all_chars(char* str, char c);

int main()
{
    char satz[] = "Die naechste Vorlesung ist am 9.1.2017, 10.00 Uhr, im HS 1 (Bau C)";
    char delimiter[] = " ";
    char* ptr = strtok(satz, delimiter);

    while (ptr != NULL) {
        remove_all_chars(ptr, ',');
        remove_all_chars(ptr, '(');
        remove_all_chars(ptr, ')');
        printf("Abschnitt gefunden: %s\n", ptr);
        ptr = strtok(NULL, delimiter);
    }
    return 0;
}

void remove_all_chars(char* str, char c) {
    char *pr = str, *pw = str;
    while (*pr) {
        *pw = *pr++;
        pw += (*pw != c);
    }
    *pw = '\0';
}
