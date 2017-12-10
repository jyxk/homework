#include<stdio.h>
#define Swap(x, y)    \
    {                 \
        int temp = x; \
        x = y;        \
        y = temp;\
     }

int main(void){
    int x, y;
    int i = 1;
    while(scanf("%d%d", &x, &y) != EOF){
        Swap(x, y)
        
        printf("Case %d:\nBefore Swap:a=%d b=%d\nAfter Swap:a=%d b=%d\n\n", i, y, x, x, y);
        i++;
    }
    return 0;
}