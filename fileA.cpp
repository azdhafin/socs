#include <stdio.h>
#include <string.h>

struct Data
{
    char nama[45];
    char latin[45];
};
int main()
{
    int n, t;
    int flag;
    char s[105][45];
    Data data[105];
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &n);
    for(int j=0; j<n; j++)
	{
        fscanf(fp, "%[^#]#%[^\n]\n", data[j].nama, data[j].latin);
    }
    fscanf(fp, "%d\n", &t);
    for(int i=1; i<=t; i++)
	{
        fscanf(fp, "%s\n", s[i]);
        for(int j=0; j<n; j++)
		{
            if(strcmp(s[i], data[j].nama) == 0)
			{
                printf("Case #%d: %s\n", i, data[j].latin);
                flag = 0;
                break;
            }else
			{
                flag++;
                continue;
            }
        }
        if(flag > 0)
		{
            printf("Case #%d: N/A\n", i);
        }
    }
    fclose(fp);
    return 0;
}
