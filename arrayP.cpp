#include <stdio.h>

int main()
{
	int n, temp[101][101], notComplete=0;
	scanf("%d", &n);
	int count[105]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &temp[i][j]);
		}
	}
	for(int j=0; j<=n; j++)
	{
		for(int k=0; k<n; k++)
		{
			for(int m=0; m<n; m++)
			{
				if(temp[k][m]==j)
					count[j]++;
			}	
		}
	}
	for(int i=1; i<=n; i++)
	{
		if(count[i]<n)
			notComplete++;
	}
	printf("%d\n", notComplete);
	return 0;
}
