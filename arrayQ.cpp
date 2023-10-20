#include <stdio.h>

int main()
{
	int t, m, n, q, temp;

	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d %d %d", &n, &m, &q);
		int room[100][100]={0};
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=m; k++)
			{
				scanf("%d", &room[j][k]);
			}
		}
		int hs[55]={0};
		for(int j=1; j<=q; j++)
		{
			scanf("%d", &temp);
			for(int k=1; k<=m; k++)
			{
				hs[k]=hs[k]+room[temp][k];
			}
		}
		printf("Case #%d:\n", i);
		for(int j=1; j<=m; j++)
		{
			if(hs[j]%2==0)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
