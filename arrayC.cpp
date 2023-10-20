#include <stdio.h>

int main()
{
	int n, q, a[101], item, price;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &q);
	for(int i=1; i<=q; i++)
	{
		scanf("%d %d", &item, &price);
		printf("Case #%d:", i);
		a[item-1] = price;
		for(int j=0; j<n; j++)
		{
			printf(" %d", a[j]);
		}
		printf("\n");
	}
	return 0;
}
