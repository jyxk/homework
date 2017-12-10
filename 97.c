#include<stdio.h>
#include<math.h>

#define S(a, b, c) (((a)+(b)+(c))/2)
#define AREA(S, a, b, c) sqrt((S)*((S)-a)*((S)-b)*((S)-c))

int main(void){

    double area;
    int s, a, b, c;

    while(scanf("%d%d%d", &a, &b, &c) != EOF){
        s = S(a, b, c);
        area = AREA(s, a, b, c);
        printf("%d %lf\n", s, area);
    }

    return 0;
}