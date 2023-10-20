#include <stdio.h>

void bubblesort(long long int ar[], long long int n)
{
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(ar[j] > ar[j+1]){
				long long int temp = ar[j];
				ar[j] = ar[j+1]; 
				ar[j+1] = temp; 
			}
		}
	}
}
int main()
{
	int t, n;
	long long int x[101], x2[101]={0};
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &n);
		for(int j=0; j<n; j++)
		{
			scanf("%lld", &x[j]);
		}
		bubblesort(x, n);
		long long int count=0, temp=0, pos;
		for(int j=0; j<n; j++)
		{
			temp = x[j];
			x2[temp]++;
		}
		for(int j=0; j<n; j++)
		{
			if(x[j] > count)
			{
				count += x2[j];
				pos = j;
			}
			else if(x[j] == count)
				break;
		}
		printf("Case #%d: %lld\n%lld\n", i, x2[pos], pos);
		pos=0;
		for(int j=0; j<n; j++)
		{
			x2[j] = 0;
		}
	}
	return 0;
}

/*
3
8
1 1 2 2 3 4 5 5 
8
5 5 4 3 2 2 1 1 
4
1 1 1 3
*/
