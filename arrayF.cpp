#include <stdio.h>
#include <string.h>

int main()
{
	int t, count, len;
	char str[10001];
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		int word[50]={0};
		count=0;
		scanf("%[^\n]", str); getchar();
		len = strlen(str);
		for(int j=0; j<len; j++)
		{
			word[str[j]-'a']++;
		}
		for(int j=0; j<26; j++)
		{
			if(word[j] > 0)
			{
				count++;
			}
		}
		printf("Case #%d: ", i);
		if(count%2 == 0)
		{
			printf("Yay\n");
		}
		else
		{
			printf("Ewwww\n");
		}
	}
	return 0;
}
