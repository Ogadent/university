void print_array(int w[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%i", w[i]);
                if (i < n - 1) printf(", ");
	}
}
