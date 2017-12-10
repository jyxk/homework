#include<stdio.h>
int main(void){

    double x;
    while(1){
        scanf("%lf", &x);

        if(!x)
            return 0;
        else if(x < 1000)
            printf("0.000000\n");
        else if(x >= 1000 && x < 2000)
            printf("%lf\n", 0.05*(x-1000));
        else if(x >= 2000 && x < 3000)
            printf("%lf\n", 0.1*(x-2000)+50);
        else if(x >= 3000 && x < 4000)
            printf("%lf\n", 0.15*(x-3000)+150);
        else if(x >= 4000 && x < 5000)
            printf("%lf\n", 0.2*(x-4000)+300);
        else if(x >= 5000)
            printf("%lf\n", 0.25*(x-5000)+500);
    }

    return 0;
}