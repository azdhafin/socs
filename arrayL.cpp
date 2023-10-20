#include <stdio.h>

int main()
{
	int n, a[1001], b[1001];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++)
	{
		scanf("%d", &b[a[i]]);
	}
	for(int j=0; j<n; j++)
	{
		if(j == n-1)
			printf("%d\n", b[j]);
		else
			printf("%d ", b[j]);
	}
//	printf("\n");
	return 0;
}

