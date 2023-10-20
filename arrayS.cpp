#include<stdio.h>

int main()
{
	int t, a,b, rs_a, rs_b, num[100001], id, flag=0;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		id = 0;
		scanf("%d %d", &a, &b);
		while(a>0 || b >0)
		{
			rs_a = a%10;
			rs_b = b%10;
			num[id] = (rs_a+rs_b)%10;
			id++;
			a = a/10;
			b = b/10;
		}
		flag = 0;
		printf("Case #%d: ", i);
		for(int j=id-1; j>=0; j--)
		{
			if(num[j] != 0)
				flag = 1;
			
			if(flag == 1)
				printf("%d", num[j]);
		}
		
		if(flag == 0)
			printf("0");
		printf("\n");
	}
	return 0;
}
