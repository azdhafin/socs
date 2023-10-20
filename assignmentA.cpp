#include <stdio.h>

int main()
{
	int a;
	double a1, a2, a3, b1, b2, b3;
	scanf("%d\n", &a);
	scanf("%lf %lf\n", &a1, &b1);
	scanf("%lf %lf\n", &a2, &b2);
	scanf("%lf %lf\n", &a3, &b3);
	printf("%.2lf\n", (a1*b1) / 360);
	printf("%.2lf\n", (a2*b2) / 360);
	printf("%.2lf\n", (a3*b3) / 360);
	return 0;
}
