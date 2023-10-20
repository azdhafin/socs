#include<stdio.h>
#include<string.h>


int main()
{
	int t, len, idx, dist, min;
	char message[1005];
	int distance[1005];
	char vocal[6]={'A', 'I', 'U', 'E', 'O'};
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		scanf("%[^\n]", message); getchar();
		len=strlen(message);
		printf("Case #%d:\n", i);
		for(int j=0; j<len; j++)
		{
			if(message[j]=='A' || message[j]=='I' || message[j]=='U' || message[j]=='E' || message[j]=='O')
			{
				distance[j]=0;
				printf("%c", message[j]);
			}
			else
			{
				for(int k=0; k<5; k++)
				{
					if(message[j]>=vocal[k]){
						dist=message[j]-vocal[k];
						if(k==0 || min>dist)
						{
							min=dist;
							idx=k;
						}
					}
					
				}
				distance[j]=min;
				printf("%c", vocal[idx]);
			}
			
		}
		printf("\n");
		for(int j=0; j<len; j++)
		{
			printf("%d", distance[j]);
		}
		printf("\n");
	}
	return 0;
}
