#include <stdio.h>

int main()
{
	int t; 
	long long int n, temp[91];
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%lld", &n);
		for(int j=0; j<n ;j++)
		{
			if(j == 0)
			{
				temp[j] = 0;
			}
			else if(j == 1)
			{
				temp[j] = 1;
			}
			else
			{
				temp[j] = temp[j-1] + temp[j-2];
			}
		}
		printf("Case #%d: %lld\n", i, temp[n-1]);
	}
	return 0;
}
