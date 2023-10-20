#include <stdio.h>

int number(int n, int *call)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;
	if(n%3 == 0)
		return number((n-n/3)+1, call);
	if(n == 3 || n ==4)
		(*call)++;
	else
		return number(n-1, call) + n + number(n-2, call) + 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	int x[t], count[t];
	for(int i=1; i<=t; i++)
	{
		int n=0, call=0;
		scanf("%d", &n);
		x[i] = number(n, &call);
		count[i] = call;
		printf("Case #%d: %d %d\n", i, x[i], count[i]);
	}
	return 0;
}
