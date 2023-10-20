#include <stdio.h>
#include <math.h>

int main()
{
	int t, count;
	long int n;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%ld", &n);
		for(int j=1; j<=sqrt(n); j++)
		{
			if(n%j == 0)
			{
				count++;
				if(j*j != n)
					count++;	
			}
		}
		printf("Case #%d: %d\n", i, count);
		count=0;
	}
	return 0;
}
