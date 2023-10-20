#include <stdio.h>

long long int binsearch(long long int res)
{
	long long int index;
	long long int mid;
	long long int left=0;
	long long int right=1500000;
	while(left<=right)
	{
		mid=(left+right)/2;
		if((mid*(mid+1)*(2*mid+1))/6 >= res && (mid-1)*mid*(2*(mid-1)+1)/6 < res)
		{
			index=mid;
			break;
		}
		else if(mid*(mid+1)*(2*mid+1)/6 < res)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return index;
}

int main()
{
	long long int t, x;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%lld", &x);
		printf("Case #%lld: %lld\n", i, binsearch(x));
	}
	return 0;
}
