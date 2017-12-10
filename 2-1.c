#include<stdio.h>
int main(void){
    int i;
    while(scanf("%d", &i) == 1){
        if(i % 3 == 0 && i % 10 == 5)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}