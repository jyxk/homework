#include<stdio.h>
#include<limits.h>

int i, j, m;
void swap(int *a, int *b);

int main(void){
    int n, num[22];
    int min = INT_MIN;
    scanf("%d", &n);
    while(n){
        
        for (i = 0; i < n; i++)
            scanf("%d", &num[i]);

        for (i = 0; i < n-1; i++){
            min = i;
            for (j = i+1;j < n; j++)
                if(num[min] > num[j])
                    min = j;
            if(min != i)
                swap(&num[min], &num[i]);
        }

        printf("%d", num[0]);
        for (i = 1; i < n; i++)
            printf(" %d", num[i]);
        putchar('\n');
        scanf("%d", &n);
    }
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}