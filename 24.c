#include<stdio.h>

void print(void);

int main(void){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        print();
        printf("\n");
    }
    return 0;
}

void print(void){
    char c;
    if((c = getchar()) != '\n')
        print();
    if(c != '\n')
        printf("%c", c);
}