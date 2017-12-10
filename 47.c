#include<stdio.h>

void reverse(int x[], int num);

int main(void){
    int n, num;
    int x[100];
    
    scanf("%d", &n);
    while(n--){
        scanf("%d", &num);
        int i;
        for (i = 0; i < num; i++)
            scanf("%d", (x+i));
        reverse(x, num);
        printf("%d", *x);
        int j;
        for (j = 1; j < num; j++)
            printf(" %d", *(x + j));
        printf("\n");
    }

    return 0;
}

void reverse(int x[], int num){
    int *head = x;
    int *tail = x + num - 1;
    int temp;
    while((head - tail) < 0){
        temp = *head;
        *head = *tail;
        *tail = temp;
        head++;
        tail--;
    }
}