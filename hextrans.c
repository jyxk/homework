#include<stdio.h>

int main(void){

    int count;
    char maybehex;

    scanf("%d", &count);
    getchar();
    while(count--){
        scanf("%c", &maybehex);
        getchar();
        if((maybehex>='0') && (maybehex<='9'))
            printf("%d\n", maybehex - 48);
        else if((maybehex>='A') && (maybehex<='F'))
            printf("%d\n", maybehex - 55);
        else if((maybehex>='a') && (maybehex<='f'))
            printf("%d\n", maybehex - 87);
        else
            printf("%d\n", maybehex);
    }

    return 0;
}
