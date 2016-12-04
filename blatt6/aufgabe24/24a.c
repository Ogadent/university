double read_double(void)
{
        double d;
        int result = scanf("%lf", &d);
        if (result == 1 && getchar() == '\n') return d;
        return !(result = flush_buff()) ? DBL_MIN : DBL_MAX;
}
