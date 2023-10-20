#include <stdio.h>

void printBinary(long long int n) 
{
    if(n == 0) 
        return;
    printBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
	int t; 
	long long int n; 
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%lld", &n);
		printf("Case #%d: ", i+1); 
		printBinary(n);
		printf("\n");
	}	
	
	return 0; 
}
