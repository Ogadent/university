void print_lines(int n)
{
        if (--n) print_lines(n);
        printf("\n");
}
