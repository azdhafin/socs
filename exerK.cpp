#include <stdio.h>
#include <string.h>

long long modulo(char number[]) 
{
    long long remainder = 0;
    int len = strlen(number);
    for (int i = 0; i < len; i++) 
	{
        remainder = (remainder * 10 + number[i] - '0') % 11;
    }
    return remainder;
}

int main()
{
	
	int t; 
 	char abnoxiouslylargenumber[100000]; 
	scanf("%d", &t); 
	for(int i = 0; i < t; i++){
		scanf("%s", &abnoxiouslylargenumber);
		if(modulo(abnoxiouslylargenumber) == 0){
			printf("Case #%d: Yeah\n", i+1);
		}
		else{
			printf("Case #%d: Nah\n", i+1); 
		}
	}
	
	return 0; 
}
