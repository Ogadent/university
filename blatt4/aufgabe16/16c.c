int calc_number_of_digits(int n)
{
        return n < 10 ? 1 : 1 + calc_number_of_digits(n /  10);
}
