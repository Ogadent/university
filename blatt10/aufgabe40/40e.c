int main(void)
{
        int** x, y;
        if (!array_create(x, 7)) {
                return 1;
        }
        if (!array_create(y, 7)) {
                array_destroy(*x);
                return 1;
        }
        array_init(*x, 7);
        array_init(*y, 7);
        printf("%i", mult_array(*x, *y, 7);
        return 0;
}
