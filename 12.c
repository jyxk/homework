#include <stdio.h>
#include <math.h>

int main(void){

    unsigned int mask[4] = {0xff000000, 0x00ff0000, 0x0000ff00, 0xff};
    unsigned int ipbit[4];
    unsigned int ip;

    int n;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &ip);

        ipbit[0] = (ip & mask[0]) >> 24;
        ipbit[1] = (ip & mask[1]) >> 16;
        ipbit[2] = (ip & mask[2]) >> 8;
        ipbit[3] = (ip & mask[3]);
        printf("%u.%u.%u.%u\n", ipbit[3], ipbit[2], ipbit[1], ipbit[0]);
    }
    
    return 0;
}