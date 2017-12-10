#include<stdio.h>

int main(void){

    int count;
    unsigned short num;

    scanf("%d", &count);
    //while(getchar() != '\n');

    while(count--){
        scanf("%hu", &num);
        //getchar();
        printf("%c,%c\n", (num&0xff00U)>>8, (num&0xff));
    }

    return 0;
}