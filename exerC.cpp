#include <stdio.h>

int main()
{
	long long int a, b, c=0;
	scanf("%lld %lld", &a, &b);
	if(a < b)
	{
		for(int i=a; i<=b; i++)
		{
			c += i;
		}
	}
	else if(a > b)
	{
		for(int i=a; i>=b; i--)
		{
			c += i;
		}
	}
	else
		c = a;
	printf("%lld\n", c);
	return 0;
}
