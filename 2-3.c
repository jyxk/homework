#include<stdio.h>

int main(void){
    int a, n;
    int l_bit, r_bit;

    scanf("%d %d", &a, &n);

    for(int i = 0; i < n; i++){
        l_bit = a >> 1;
        r_bit = a & 1;
        r_bit <<= 8*(sizeof(int));
        if(a < 0)
            l_bit = l_bit & 0x8fff;
        l_bit = l_bit | r_bit;
        a = l_bit;
    }
    printf("%d", a);
    return 0;
}