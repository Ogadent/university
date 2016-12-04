int read_num(void)
{
        int i, result = scanf("%i", &i);
        if (result == 1 && getchar() == '\n') {
                return  i > 0 && i < 13 ? i : 0;
        }
        return result ? EOF : flush_buff() + EOF;
}
