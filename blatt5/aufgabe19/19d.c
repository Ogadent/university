void strdel(char *ct, char c)
{
	int i, j;
	for (i = 0; ct[i] != '\0'; i++) {
		if (ct[i] == c) {
			for (j = i; ct[j] != '\0'; j++) ct[j] = ct[j + 1];
			i--;
		}
	}
}
