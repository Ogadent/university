#include <stdio.h>

#define GRAMS_PER_KILOGRAM 1000

double gramsToKilograms(double grams);

int main()
{
	double grams;
	scanf("%lf", &grams);
	printf("%f", gramsToKilograms(grams));
	return 0;
}

double gramsToKilograms(double grams)
{
	return grams / GRAMS_PER_KILOGRAM;
}