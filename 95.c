#include<stdio.h>

void exc(int u[], int n, int k);

int main(void){
    int n, k;
    int u[70] = {};

    while(scanf("%d %d", &n, &k) != EOF){

            for (int i = 0; i < n; i++)
                scanf("%d", &u[i]);

        exc(u, n, k);
        printf("%d", u[0]);
        for (int i = 1; i<n; i++)
            printf(" %d", u[i]);
        printf("\n");
    }
    
    return 0;
}

void exc(int u[], int n, int k){
    while(k--){
        int temp = u[0];
        for (int i = 0; i < n-1; i++)
            u[i] = u[i + 1];
        u[n - 1] = temp;
    }
}