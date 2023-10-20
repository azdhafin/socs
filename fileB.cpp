#include <stdio.h>
#include <string.h>

//int main()
//{
////	FILE *fp;
////	fp = fopen("testdata.in", "r");
//	int t, a;
//	char x[1001], l[1001];
//	scanf("%d", &t); getchar();
//	for(int i=1; i<=t; i++)
//	{
//		scanf("%d", &a); getchar();	
//		scanf("%[^\n]", &x); getchar();	
//		for(int j=0; j<strlen(x); j++)
//		{
//			if(x[j] == '0')
//				l[j] = 'O';
//			else if(x[j] == '1')
//				l[j] = 'I';
//			else if(x[j] == '3')
//				l[j] = 'E';
//			else if(x[j] == '4')
//				l[j] = 'A';
//			else if(x[j] == '5')
//				l[j] = 'S';
//			else if(x[j] == '6')
//				l[j] = 'G';
//			else if(x[j] == '7')
//				l[j] = 'T';
//			else if(x[j] == '8')
//				l[j] = 'B';
//			else
//				l[j] = x[j];
//			
//		}
//		for(int j=0; j<strlen(x);j ++)
//		{
//			if(l[j] >= 'A' && l[j] <= 'Z')
//			{
//				l[j] -= a;
//				if(l[j] < 65)
//					l[j] += 26;
//			}
//		}
//		printf("Case #%d: %s\n", i, l);
//		l[i]={0};
//		x[i]={0};
//	}
//	return 0;
//}

int main(){
    int T;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);
    for(int i = 0; i < T; i++){
        int K, len;
        char S[1005] = {0};
        char encrypt[1005] = {0};
        fscanf(fp, "%d\n", &K);
        fscanf(fp, "%[^\n]\n", S);
        len = strlen(S);
        for(int j = 0; j < len; j++){
            if(S[j] == '0'){
                encrypt[j] = 'O';
            }else if(S[j] == '1'){
                encrypt[j] = 'I';
            }else if(S[j] == '3'){
                encrypt[j] = 'E';
            }else if(S[j] == '4'){
                encrypt[j] = 'A';
            }else if(S[j] == '5'){
                encrypt[j] = 'S';
            }else if(S[j] == '6'){
                encrypt[j] = 'G';
            }else if(S[j] == '7'){
                encrypt[j] = 'T';
            }else if(S[j] == '8'){
                encrypt[j] = 'B';
            }else{
                encrypt[j] = S[j];
            }
        }
        for(int j = 0; j < len; j++){
            if(encrypt[j] >= 65 && encrypt[j] <= 90){
                if((encrypt[j] - 'A' - K) < 0){
                    encrypt[j] += 26;
                }
                encrypt[j] -= K;
            }
        }
        printf("Case #%d: %s\n", i+1, encrypt);
    }
    fclose(fp);
    return 0;
}
