#include<stdio.h>

void Bubblesort(int num[], int length);

int main(void){
    int num[10];

    while(scanf("%d", &num[0]) != EOF){
        int i;
        for (i = 1; i < 10; i++)
            scanf("%d", &num[i]);
        getchar();
        Bubblesort(num, 10);
        for (i = 0; i < 9; i++)
            printf("%d->", num[i]);
        printf("%d\n", num[9]);
    }
    return 0;
}

void Bubblesort(int num[], int length){
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - i - 1; j++){
            if(*(num+j) > *(num+j+1)){
                int temp = *(num + j);
                *(num + j) = *(num + j + 1);
                *(num + j + 1) = temp;
            }
        }
    }
}