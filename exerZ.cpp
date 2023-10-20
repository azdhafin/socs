#include <stdio.h>

struct ok
{
	char nim[11];
	char name[21];
	int score;
};
	
int main()
{
 struct ok data[50001];
 long long int t, sum=0;
 scanf("%lld", &t); getchar();
 for(int i=0; i<t; i++)
 {
  scanf("%s", &data[i].nim); getchar();
  scanf("%[^\n]", &data[i].name); getchar();
  scanf("%d", &data[i].score); getchar();
  sum += data[i].score;
 }
 for(int i=0; i<t; i++)
 {
  if(data[i].score >= sum/(t*1.00))
   printf("%s %s\n", data[i].nim, data[i].name);
 }
 return 0;
}

/*
3
2301905050
Jojo
75
2301905000
Lili
85
2301905011
Bibi
95
*/
