int read_three_chars(void)
{
        char s[4] = "***";
        int i, n;
        for (i = 0; i < 3; i++) {
                if ((n = getchar()) != EOF) s[i] = n;
                else return EOF;
        }
        return getchar() == '\n' ? 1 : flush_buff() + EOF;
}
