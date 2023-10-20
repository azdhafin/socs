#include <stdio.h>

int  main()
{
	int t, n, a[201], count;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		int sum[201]={0};
		scanf("%d", &n);
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[j]);	
		}	
		count = 0;
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<n-1; k++)
			{
				for(int l=k+1; l<n; l++)
				{
					if(j != k && j != l)
					{
						if(a[j] == a[k] + a[l])
						{
							sum[j] = 1;
						}
					}
				}
			}
		}
		for(int j=0; j<n; j++)
		{
			if(sum[j] == 1)
			count++;
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
