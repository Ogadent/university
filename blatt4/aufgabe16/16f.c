void print_triangle(int n)
{
        int i, j;
        for (i = 0; i <= n; i++) {
                for (j = i; j > 0; j--) printf("O");
                printf("\n");
        }
}               
