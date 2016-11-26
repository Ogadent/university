char *my_strncat(char *s, const char *ct, int n)
{
	int len = -1, i;
	while (s[++len] != '\0');
	for (i = len; i < len + n && ct[i - len] != '\0'; i++) s[i] = ct[i-len];
	s[i] = '\0';
	return s;
}
