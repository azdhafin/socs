#include <stdio.h>

int count=0;
int recursion(int a)
{
	if(a%3 == 0 && a != 0)
		count++;
	if(a == 0)
		return 1;
	else if(a == 1)
		return 2;
	else if(a%5 == 0)
		return a*2;
	else
		return recursion(a-1)+a+recursion(a-2)+a-2;
	}

int main()
{
	int t, a;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &a);
		long long int x = recursion(a);
		printf("Case #%d: %d %d\n", i, x, count);
		count=0;
		
	}
//	return 0;
}
