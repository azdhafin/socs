#include <stdio.h>

int main()
{
	int n, flag=0;
	int arr[101][101];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			for(int k=0; k<j; k++)
			{
				if(arr[i][k] == arr[i][j])
				{
					flag=1;
					break;
				}
			}
			for(int k=0; k<i; k++)
			{
				if(arr[k][j] == arr[i][j])
				{
					flag=1;	
					break;
				}
			}
		}
	}
	if(flag == 0)
		printf("Yay\n");
	else
		printf("Nay\n");
	return 0;
}
