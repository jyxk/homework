#include<stdio.h>

int main(void){
    double Pi;
    int deno;
    int flag = 1;
    for(deno = 1; deno < 1e5 + 2; deno += 2){
        if(flag){
            Pi += 1.0/(double)deno;
            flag = 0;
        }
        else{
            Pi -= 1.0/(double)deno;
            flag = 1;
        }
    }
    printf("%.9lf\n", Pi * 4.0);
    return 0;
}