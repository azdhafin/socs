#include <stdio.h>

int main()
{
	int t, n, arr[1001], p, q;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &n);
		for(int j=1; j<=n; j++)
		{
			scanf("%d", &arr[j]);
		}
		scanf("%d %d", &p, &q);
		printf("Case #%d : ", i);
		if(arr[p]>arr[q])
			printf("Bibi\n");
		else if(arr[p]<arr[q])
			printf("Lili\n");
		else
			printf("Draw\n");
	}
	return 0;
}
