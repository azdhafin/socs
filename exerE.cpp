#include <stdio.h>

int main()
{
	int t, n, x, l=0;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &n);
		for(int j=0; j<n; j++)
		{
			scanf("%d", &x);
			l += x;
		}
		printf("Case #%d: %d\n", i, l);
		l=0;
	}
	return 0;
}
