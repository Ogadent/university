#include <stdio.h>
#include <ctype.h>

#define MIN_CHARS 2
#define MAX_CHARS 20

int read_name(char input[]);

int main()
{
	int result;
	char name[21];
	result = read_name(name);
	result != 0 ? printf("Eingabe gueltig: %s", name) : printf("Eingabe ungueltig");
	return 0;
}

int read_name(char input[])
{
	int amount = 1, temp = getchar();
	if (!isupper(temp)) {
		return 0;
	}
        do{
		input[amount - 1] = temp;
		if (!isalpha(temp) || amount++ > MAX_CHARS) {
			return 0;
		}
	}while ((temp = getchar()) != '\n');
	input[amount - 1] = '\0';
	return amount >= MIN_CHARS;
}
