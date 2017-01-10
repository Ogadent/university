/*
a) Der Algorithmus führt eine rekursive Multiplikation durch
b)
*/
int func(int a, int b)
{
        return b > 1 ? a + func(a, b - 1) : a;
}
