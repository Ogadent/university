int multiply(int a, int b)
{
        return !b ? 0 : a + multiply(a, b-1);
}
