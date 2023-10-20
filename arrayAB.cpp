#include <stdio.h>

int main(){
    long long int tc;
    scanf("%lld", &tc);

    long long int a[50][50], b[50][50], c[50][50], d[50][50], times[50][50];

    for(int i = 0; i < tc; i++) {
        long long int size;
        scanf("%lld", &size);
//            Input matrix 3
            for(int j = 0 ; j < size; j++) {
                for(int x = 0; x < size; x++) {
                    scanf("%lld", &a[j][x]);
                }
            }
//            Input matrix 2
            for(int j = 0 ; j < size; j++) {
                for(int x = 0; x < size; x++) {
                    scanf("%lld", &b[j][x]);
                }
            }
//            Input matrix 3
            for(int j = 0; j < size;j++){
                for(int x = 0; x < size; x++){
                    scanf("%lld", &c[j][x]);
                }
            }
//            Matrix 1 * matrix 2
            for(int j = 0; j < size; j++){
                for(int x = 0; x < size; x++){
                    times[j][x] = 0;
                    for(int k = 0; k < size; k++){
                        times[j][x] += a[j][k] * b[k][x];
                        d[j][x] = times[j][x];
                    }

                }
            }

            for(int j = 0; j < size; j++){
                for(int x = 0; x < size; x++){
                    times[j][x]= 0;
                    for(int k = 0; k < size; k++){
                        times[j][x] += d[j][k] * c[k][x];

                    }
                }
            }

//            Printing the result
            printf("Case #%d:\n", i + 1);
            for(int j = 0 ; j < size; j++) {
                for(int x = 0; x < size; x++) {
                    if(x == size-1){
                        printf("%lld\n", times[j][x]);

                    } else if(x == size-1){
                        printf("%lld\n", times[j][x]);
                    } 
                    else{
                        printf("%lld ", times[j][x]);
                    }
                }

            }
    }
}
