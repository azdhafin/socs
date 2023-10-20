#include <stdio.h>
#include <string.h>

struct data
{
	char name[55];
	int num;
};

void swapContent(struct data *A, struct data *B)
{
	struct data temp;

	temp = *A;
	*A = *B;
	*B = temp;
}

void namesort(struct data x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(strcmp(x[j].name, x[j+1].name) > 0)
			{
				swapContent(&x[j], &x[j+1]); 
			}
		}
	}
}

void bubblesort(struct data x[], int n)
{
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(x[j].num > x[j+1].num)
			{
				swapContent(&x[j], &x[j+1]);
			}
		}
	}
}

int main()
{
	struct data x[101];
	int t, n;
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &n); getchar();
		for(int j=0; j<n; j++)
		{
			scanf("%[^#]#%d", &x[j].name, &x[j].num); getchar();
		}
		namesort(x, n);
		bubblesort(x, n);
		printf("Case #%d:\n", i);
		for(int j=0; j<n; j++)
			printf("%s - %d\n", x[j].name, x[j].num);
		fflush(stdin);
	}
	return 0;
}

/*
2
3
andi#30
rudi setiawan#50
aben#30 
5
andi#70
rudi setiawan#50
aben#70
rony sinardi#50
kurniati#40
*/
