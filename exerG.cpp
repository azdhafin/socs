#include <stdio.h>

int is_prime(int num) 
{
    if (num < 2) 
	{
        return 0;
    }
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
	int t; 
	long long int num; 
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
	 	scanf("%lld", &num);
	    if (is_prime(num)) 
		{
	        printf("Case #%d: prime\n", i+1);
	    } else {
	        printf("Case #%d: not prime\n", i+1);
	    }
	}
	
	return 0; 
}

