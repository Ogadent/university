int ispalindrom(const char *ct)
{
	int len = -1, i;
	while (ct[++len] != '\0');
	for (i = 0; i < len / 2; i++) {
                if (ct[len - 1 - i] != ct[i]) return 0;
	}
	return 1;
}
