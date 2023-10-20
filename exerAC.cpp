#include <stdio.h>
#include <string.h>

long long int check(char num[])
{
	long long int x=0;
	int len = strlen(num);
	for(int i=0; i<len; i++)
	{
		x = (x * 10 + num[i] - '0') % 6;	
	}	
	return x;
}

int main()
{
	FILE *fp;
	fp = fopen("testdata.in", "r");
	int t;
	char n[100000];
	fscanf(fp, "%d\n", &t);
	for(int i=1; i<=t; i++)
	{
		fscanf(fp, "%s\n", &n);
		if(check(n) == 0)
		{
			printf("Case #%d: YES\n", i);
		}
		else
			printf("Case #%d: NO\n", i);	
	}
	fclose(fp);
	return 0;
}
