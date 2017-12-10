#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){

        if((a-b)*(a-c) <= 0.0)
            printf("A:%d\n", a);
        else if((b-a)*(b-c) <= 0.0)
            printf("B:%d\n", b);
        else if((c-a)*(c-b) <= 0.0)
            printf("C:%d\n", c);

        if(getchar() == EOF)
            exit(EXIT_SUCCESS);
    }
    return 0;
}