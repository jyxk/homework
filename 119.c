#include <stdio.h>

int main(void){
    int matrix[5][5] = {};
    int matrixT[5][5] = {};
    int i, j;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", *(matrix+i)+j);
        }
    }

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            *(*(matrixT+i)+j) = *(*(matrix+j)+i);

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
            printf(" %d", *(*(matrixT+i)+j));
        printf("\n");
    }
            return 0;
}