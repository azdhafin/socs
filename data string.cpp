#include <stdio.h>
int main(){
	char firstname [50];
	char lastname [50];
	
	printf("firstname: ");
	scanf("%[^\n]", firstname); getchar();
	printf("lastname: ");
	scanf("%[^\n]", lastname); getchar();
	
	printf("hello %s %s\n", firstname, lastname);
	return 0;
}

