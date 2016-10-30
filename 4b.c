#include <math.h>
#include <stdio.h>

#define M_PI 3.14159265358979323846

double calc_circle_area(double radius);

int main() 
{ 
	double radius;
	scanf("%lf",&radius);
	printf("Calculated area of circle with radius %f is: %f", radius,
					calc_circle_area(radius));
	return 0;
}

double calc_circle_area(double radius)
{
	return M_PI * radius * radius;
} 