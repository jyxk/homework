#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num, fib, counter, prefib, temp;//num 数列项数  fib 数列各项值 counter 记录运算时当前项数

    while(scanf("%d", &num)){
        if(num < 3 && num){
            printf("Error!\n\n");
            continue;
        }
        if(!num){
            exit(EXIT_SUCCESS);
        }
            
        
        for(counter = 1, fib = 1, prefib = 0; counter <= num; counter++){
            printf("%10d", fib);
            if(counter % 8 == 0)
                printf("\n");
            else if(counter == num)
                printf("\n");

            temp = fib;
            fib += prefib;
            prefib = temp;
        }
        printf("\n");
    }
    return 0;
}