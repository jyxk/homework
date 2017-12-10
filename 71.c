#include<stdio.h>
#include<stdlib.h>

int main(void){

    int flag;
    double a, b;
    char symbol;
    double ans1, ans2;

    while(scanf("%d %lf %lf %c", &flag, &a, &b, &symbol) != EOF){

        if(flag == 0 || flag == 2){
            if(symbol == '+')
                ans1 = a + b;
            else if(symbol == '-')
                ans1 = a - b;
            else if(symbol == '*')
                ans1 = a * b;
            else if(symbol == '/')
                ans1 = a / b;
        }
        if(flag == 1 || flag == 2){
            switch(symbol){
                case '+':
                    ans2 = a + b;
                    break;
                case '-':
                    ans2 = a - b;
                    break;
                case '*':
                    ans2 = a * b;
                    break;
                case '/':
                    ans2 = a / b;
                    break;
            }
        }
        
        if(flag == 1)
            printf("After switch processing,the result is : %.2lf\n\n", ans2);
        else if(flag == 0)
            printf("After if-else processing,the result is : %.2lf\n\n", ans1);
        else if(flag == 2){
            printf("After if-else processing,the result is : %.2lf\n", ans1);
            printf("After switch processing,the result is : %.2lf\n\n", ans2);
        }
        
        //if(getchar() == EOF)
        //    exit(EXIT_SUCCESS);
    }
    return 0;
}