long int fibonacci(int n)
{
        return n > 1 ? fibonacci(n - 1) + fibonacci(n - 2) : n;
}
