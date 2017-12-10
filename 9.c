#include<stdio.h>
#include<math.h>

int main(void){

    float a, b, c;
    float p, area;
    int n;

    scanf("%d", &n);
    while(n--){
        scanf("%f%f%f", &a, &b, &c);
        p = (a + b + c) / 2;
        area = sqrt(p*(p - a) * (p - b) * (p - c));
        printf("area=%f\n", area);
    }
    return 0;
}