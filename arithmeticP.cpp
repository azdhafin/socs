#include <stdio.h>

int main()
{
	double n, p;
	double diff;
	for(int i=0; i<4; i++){
		scanf("%lf %lf", &n, &p);
		diff = 100-n;
		printf("$%.2lf\n", 100*p/diff);
	}
	return 0;
}
