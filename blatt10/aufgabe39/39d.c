void div(unsigned int n, unsigned int k)
{
        unsigned int d = 0;
        while (n > k) {
                n -= k;
                d++;
        }
        printf("%i, %i", n, d);
}
