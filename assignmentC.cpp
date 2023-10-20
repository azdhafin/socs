#include <stdio.h>

int main()
{
	long int a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3, sum1, sum2, sum3;
	scanf("(%ld+%ld)x(%ld-%ld)\n", &a1, &b1, &c1, &d1);
	sum1 = (a1+b1)*(c1-d1);
	scanf("(%ld+%ld)x(%ld-%ld)\n", &a2, &b2, &c2, &d2);
	sum2 = (a2+b2)*(c2-d2);
	scanf("(%ld+%ld)x(%ld-%ld)\n", &a3, &b3, &c3, &d3);
	sum3 = (a3+b3)*(c3-d3);
	printf("%ld %ld %ld\n", sum1, sum2, sum3);
	return 0;
}
