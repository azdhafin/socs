#include <stdio.h>

int main()
{
	char course1[10];
	char course2[10];
	char course3[10];
	char course4[10];
	char course5[10];
	int h1, h2, h3, h4, h5, H6, H7, H8, H9, H10;
	int m1, m2, m3, m4, m5, M6, M7, M8, M9, M10;
	
	scanf("%s %d:%d-%d:%d\n", course1, &h1, &m1, &H6, &M6);
	scanf("%s %d:%d-%d:%d\n", course2, &h2, &m2, &H7, &M7);
	scanf("%s %d:%d-%d:%d\n", course3, &h3, &m3, &H8, &M8);
	scanf("%s %d:%d-%d:%d\n", course4, &h4, &m4, &H9, &M9);
	scanf("%s %d:%d-%d:%d\n", course5, &h5, &m5, &H10, &M10);
	
	printf("%s %0.2d:%0.2d-%0.2d:%0.2d\n", course1, h1-1, m1, H6-1, M6);
	printf("%s %0.2d:%0.2d-%0.2d:%0.2d\n", course2, h2-1, m2, H7-1, M7);
	printf("%s %0.2d:%0.2d-%0.2d:%0.2d\n", course3, h3-1, m3, H8-1, M8);
	printf("%s %0.2d:%0.2d-%0.2d:%0.2d\n", course4, h4-1, m4, H9-1, M9);
	printf("%s %0.2d:%0.2d-%0.2d:%0.2d\n", course5, h5-1, m5, H10-1, M10);
	
	return 0;
}
