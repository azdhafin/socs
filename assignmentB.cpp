#include <stdio.h>

int main()
{
	double l;
	double b;
	double h;
	
	scanf("%lf %lf %lf", &l, &b, &h);
	printf("%.3lf\n", h*b+3*l*b);
	
	return 0;
}
