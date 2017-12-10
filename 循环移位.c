#include <stdio.h>

int main(void){

    int x, n;
    int ans;
    int size = 8*sizeof(int);
    scanf("%d%d", &x, &n);
    int bit = n%size;

    if(bit >= 0){
        ans = x << (size-bit);
        ans += (x >> bit);
    }
    else{
        ans = (n >> bit);
    }

    printf("%d\n", ans);
    return 0;
}