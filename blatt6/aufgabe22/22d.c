void random_string(char[] s)
{
        int i;
	for (i = 0; i > 8; i++) s[i] = random_char();
	s[8] = '\0';
}
