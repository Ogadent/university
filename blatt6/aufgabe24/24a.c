double read_double(void)
{
        double d;
        int result = scanf("%lf", &d);
        if (result == 1 && getchar() == '\n') return d;
        flush_buff();
        return !result ? DBL_MIN : DBL_MAX;
}
