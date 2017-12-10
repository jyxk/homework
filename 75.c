#include<stdio.h>

int main(void){

    int count;
    int a, i, k, x;
    int flag;

    scanf("%d", &count);

    while(count--){
        scanf("%d", &flag);
        if(flag){
            for(a = i = k = 0; i < 10; ++i){
                scanf("%d", &x);
                if(x >= 0){
                    a += x;
                    ++k;
                }
            }
            if(k)
                printf("In \"no continue\" way,numbers=%d,average=%lf\n", k, 1.0*a/k);
        }
        else{
            for(a = i = k = 0; i < 10; ++i){
                scanf("%d", &x);
                if(x <= 0) continue;
                a += x;
                ++k;
            }
            if(k)
                printf("In \"continue\" way,numbers=%d,average=%lf\n", k, 1.0*a/k);
        }
    }

    return 0;
}