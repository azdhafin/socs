#include <stdio.h>
#include <string.h>

int main()
{
	int t, m, len;
	char a, b;
	char strings[1001];
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		scanf("%[^\n]", strings); getchar();
		len = strlen(strings);
		scanf("%d", &m); getchar();
		for(int j=1; j<=m; j++)
		{
			scanf("%c %c", &a, &b); getchar();
			//printf("%c %c\n", a, b);
			for(int k=0; k<len; k++)
			{
				if(strings[k] == a)
					strings[k] = b;
			}
		}
		printf("Case #%d: %s\n", i, strings);
	}
	return 0;
}

