#include<stdio.h>

int main(void){

    int n;
    int x, sum = 0;
    scanf("%d", &n);
    while(n--){
        int i;
        sum = 0;
        for (i = 0; i < 10; i++){
            scanf("%d", &x);
            sum += x;
        }
        printf("sum=%d\n", sum);
    }
    return 0;
}