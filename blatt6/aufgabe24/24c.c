int read_num(void)
{
        int i, result;
        result = scanf("%i", &i);
        if (result == 1 && getchar() == '\n' && i > 0 && i < 13) return i ;
        return flush_buff();
}
