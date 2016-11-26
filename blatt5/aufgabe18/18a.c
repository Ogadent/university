#include <stdio.h>
#include <ctype.h>

int read_digit(void);

int main()
{
	int i = read_digit();
	i != 0 ? printf("Die Eingabe war gueltig.") : printf("Die Eingabe war ungueltig.");
	return 0;
}

int read_digit(void)
{
	int i = getchar();
	if (!isdigit(i)) {
		while (getchar() != '\n');
		return 0;
	}
	return i;
}
