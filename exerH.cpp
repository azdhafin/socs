#include <stdio.h>

void swap(long long int *a, long long int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int arr[], long long int low, long long int high) \
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(long long int arr[], long long int low, long long int high) 
{
    if (low < high) 
	{
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}
    
int main()
{
	int t, count; 
	long long int n, m[100000], temp;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%lld", &n);
		for(int j=0; j<n; j++)
		{
			scanf("%lld", &m[j]);
		}
    quick_sort(m, 0, n-1);
    
		for(int j=0; j<n; j++)
		{
			if(m[j] != m[j+1])
				count++;
		}
		printf("Case #%d: %d\n", i, count);
		count=0;
	}
	return 0;
}
