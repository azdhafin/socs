//#include <stdio.h>
//
//int binarysearch(int temp[], int a, int b)
//{
//	int index=-2, l=0, r=a-1, m;
//	while(l <= r)
//	{
//		m = (l+r)/2;
//		if(temp[m] < b)
//		{
//			l=m+1;
//		}
//		else 
//		{
//			if(temp[m] == b)
//				index=m;
//			r=m-1;
//		}
//	}
//	return index+1;
//}
//
//int main()
//{
//	int n, m, i, j;
//	scanf("%d %d", &n, &m);
//	int a[n], q[m];
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(int i=0; i<m; i++)
//	{
//		scanf("%d", &q[i]);
//	}
//	for(int i=0; i<m; i++)
//	{
//		printf("%d\n", binarysearch(a, n, q[i]));
//	}
//	return 0;
//}

#include <stdio.h>
int j = 0;
int left = 0;
int binarySearch(int arr[], int target[], int left, int right){
    if(left > right){
        return -1;
    }else{
        int mid = left + (right - left)/2;
        if(arr[mid] == target[j]){
            if(arr[mid] == arr[mid-1]){
                return binarySearch(arr, target, left, mid-1);
            }else{
                return mid+1;
            }
        }else if(arr[mid] > target[j]){
            return binarySearch(arr, target, left, mid-1);
        }else{
            return binarySearch(arr, target, mid+1, right);
        }    
    }
}

int main(){
    int N, M;
    int count = 0;
    int num;
    scanf("%d %d", &N, &M);
    int A[N];
    int Q[M];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    for(j = 0; j < M; j++){
        scanf("%d", &Q[j]);
    }
    for(j = 0; j < M; j++){
        //num = binarySearch(A, Q, 0, N);
        printf("%d\n", binarySearch(A, Q, 0, N));
    }
    return 0;
}
