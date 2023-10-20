//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//   char str[1001], str2[1001];
//   int t, j, len;
//	scanf("%d", &t); getchar();
//    for(int i=1; i<=t; i++)
//    {
//   		scanf("%[^\n]", str); getchar(); 
//   		len = strlen(str);
//
//   		for(j=0; j<len; j++)
//   		{
//			str2[j] = str[len-1-j];
//		}
//		printf("Case #%d : %s\n", i, str2);
//	}
//   return 0;
//}
//
#include<stdio.h>
#include<string.h>

int main()
{
	int t, len;
	char words[1005];
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		scanf("%[^\n]", words); getchar();
		printf("Case #%d : ", i);
		len=strlen(words);
		for(int j=len-1; j>=0; j--)
		{
			printf("%c", words[j]);
		}
		printf("\n");
	}
	return 0;
}
