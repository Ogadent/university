char *my_strcpy(char *s, const char *ct)
{
	int i;
	for(i = 0; (s[i] = ct[i]) != '\0'; i++);
	return s;
}
