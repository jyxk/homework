#include<stdio.h>

int main(void){

    int n;

    while(scanf("%d", &n)){
        if(!n)
            return 0;
        while(n > 0){
            printf("%d", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}