#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a, b, temp, ab;
    int Gcd, Lcm;//Gcd 最大公约数 Lcm 最小公倍数

    while(1){
        scanf("%d%d", &a, &b);
        ab = a * b;
        if(!a && !b)
            exit(EXIT_SUCCESS);
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        while(b != 0){
            temp = a % b;
            a = b;
            b = temp;
        }

        Gcd = a;
        Lcm = ab/Gcd;

        printf("%d %d\n", Gcd, Lcm);
    }
    return 0;
}