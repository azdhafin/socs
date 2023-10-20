//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int t, n, visit[30] = {0};
//	char x[101], file;
//	FILE *fp;
//    fp = fopen ("testdata.in","r");
//    fscanf(fp, "%d", &t); 
//    
//    while(t--)
//    {
//    	fscanf(fp, "%s", x);
//    	fscanf(fp, "%d", &n);
//    	while(n--)
//    	{
//    		char a[10], b[10];
//    		fscanf(fp, "%s", a);
//    		fscanf(fp, "%s", b);
//    		char from = a[0];
//    		char to = b[0];
//    		if(!visit[from - 'A'])
//    		{
//    			visit[from - 'A'] = 1;
//    			for(int i=0; i<strlen(x); i++)
//    			{
//    				if(x[i] == from)
//    					x[i] = to;
//				}
//			}
//		}
//		int freq[30] = {0};
//		for(int i=0; i<strlen(x); i++)
//		{
//			freq[x[i] - 'A']++;
//		}
//		for(int i=0; i<26; i++)
//		{
//			if(freq[i])
//			{
//				printf("%c %d\n", 'A' + i, freq[i]);
//			}
//		}
//	}
//	return 0;
//}
//

#include <stdio.h>
#include <string.h>
int main(){
    int T, N, len;
    char X[105];
    char A, B;
    char letter = 'A';
    FILE *fp;
    fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);
    for(int i = 0; i < T; i++){
        int alphabet[27] = {0};
        int change[26] = {0};
        fscanf(fp, "%s\n", &X);
        len = strlen(X);
        fscanf(fp, "%d\n", &N);
        for(int j = 0; j < N; j++){
            fscanf(fp, "%c %c\n", &A, &B);
            if(change[A-'A'] == 0){
                change[A-'A'] = 1;
                for(int k = 0; k < len; k++){
                    if(X[k] == A){
                    X[k] = B;
                    }
                }
            }
        }
        for(int j = 0; j < len; j++){
            for(int k = 0; k < 26; k++){
                if(X[j] == 'A' + k){
                    alphabet[k]++;
                }
            }
        }
        for(int j = 0; j < 26; j++){
            if(alphabet[j] > 0){
                printf("%c %d\n", letter+j, alphabet[j]);
                alphabet[j] = 0;
            }
        }
        
    }
    return 0;
}

