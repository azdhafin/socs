#include <stdio.h>

int main()
{
	int t, n, m;
	long long int a, max, sum;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d %d", &n, &m);
		for(int j=1; j<=n; j++)
		{
			max = 0;
			for(int k=1; k<=m; k++)
			{
				scanf("%lld", &a);
				if(a > max)
				max = a;
			}
			sum += max;
		}
		printf("Case #%d: %lld\n", i, sum);
		sum = 0;
	}
	return 0;
}
