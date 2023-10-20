#include <stdio.h>

int main()
{
	long int a, b, c, d, e;
	scanf("%ld + %ld =", &a, &b);
	c = a + b;
	scanf("%ld + %ld =", &a, &b);
	d = a + b;
	scanf("%ld + %ld =", &a, &b);
	e = a + b;
	printf("%ld\n", c);
	printf("%ld\n", d);
	printf("%ld\n", e);
	return 0;
}

