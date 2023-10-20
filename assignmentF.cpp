#include <stdio.h>

int main()
{
	long int a;
	double b;
	double c, d, e;
	
	scanf("%ld %lf", &a, &b);
	c = (a+(a*b/100));
	d = (c+(c*b/100));
	e = (d+(d*b/100));
	printf("%.2lf\n", e);
	return 0;
}
