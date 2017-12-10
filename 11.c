#include <stdio.h>
#include <math.h>

int main(void){

    unsigned short x;
    int m, n;
    unsigned short mask = 0;
    int k;
    scanf("%d", &k);
    while(k--){
        int maskl[16] = {};
        mask = 0;
        scanf("%hd%d%d", &x, &m, &n);
            int i;
            for(i = 0; i <= 15; i++){       //利用循环将第m位到左数n位
                                                            //赋值为1，其余为0
                if(i>=m && i<(m+n))
                    maskl[i] = 1;
                else
                    maskl[i] = 0;
                mask = maskl[i] * pow(2.0, i) + mask;
            }

            x = x & mask;
            x <<= (15 - (m + n - 1));
            printf("%d\n", x);
        
    }
    
    
    return 0;
}