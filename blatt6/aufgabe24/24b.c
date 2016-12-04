int read_three_chars(void)
{
        char s[4] = "000";
        int i, n;
        for (i = 0; i < 3; i++) {
                if (n = getchar()) s[i] = n;
                else return flush_buff() - 1;
        }
        return (getchar() != '\n') - 3;
}
