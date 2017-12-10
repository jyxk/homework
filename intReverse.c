#include<stdio.h>
#include<limits.h>
#include<math.h>

void PrintBit(int x){
    int i;
    int n = sizeof(int) * CHAR_BIT;
    int mask = 1 << (n-1);
    for(i = 1; i <= n; ++i){
        putchar(!(x&mask) ? '0':'1');
        x <<= 1;
        if(!(i%CHAR_BIT) && i<n)
            putchar(' ');
    }
}

int main(void){

    int x, n, p;
    int ans;

    scanf("%d%d%d", &x, &p, &n);
    PrintBit(x);
    putchar('\n');
    ans = x^((unsigned)~0<<(32-n)>>(32-n)<<(p));
    PrintBit(ans);
    putchar('\n');

    return 0;
}