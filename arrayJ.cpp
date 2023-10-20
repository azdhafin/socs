#include<stdio.h>
#include<string.h>

int main()
{
	int t, len;
	char word[1001];
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		scanf("%[^\n]", word); getchar();
		len = strlen(word);
		printf("Case %d: ", i);
		for(int j=0; j<len; j++)
		{
			if(j == len-1)
				printf("%d\n", word[j]);
			else
				printf("%d-", word[j]);
		}
	}
	return 0;
}
