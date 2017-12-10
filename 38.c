#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    int n;

    scanf("%d ", &n);

    while(n--){
        scanf(" 0x%x", &num);
        printf("%d\n", num);
    }
    return 0;
}