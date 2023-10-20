#include <stdio.h>

int main()
{
	double a, b, c, d;
	for(int i=0; i<3; i++)
	{
			scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
			printf("%.2lf\n", 2*a/1+4*b/2+6*c/3+4*d/4);
	}
	return 0;
}
