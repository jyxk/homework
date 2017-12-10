#include<stdio.h>

int main(void){

    int count;
    unsigned short num;

    scanf("%d", &count);
    //while(getchar() != '\n');

    while(--count){
        scanf("%u", &num);
        printf("%d\n", (num & 0x0ff0)|((num & 0xf000)>>12)|((num & 0xf)<<12));
    }

    return 0;
}