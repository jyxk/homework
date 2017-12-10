#include<stdio.h>

int pascalT(int i, int j);
//该函数输出杨辉三角中的第i行第j个，从0开始计数

int main(void){

    int n;
    while(scanf("%d", &n) && n){
        int i;
        for(i = 0; i < n; i++){
            
            int start = 2*(n-i-1);
			while(start--)
                putchar(' ');

            printf("1");
            int j;
            for (j = 1; j < n; j++)
                if (pascalT(i, j))
                    printf("%4d", pascalT(i, j));
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}

int pascalT(int i, int j){
    if(j == 0)
        return 1;
    else
        return pascalT(i, j-1)*(i-j+1)/j;//使用递归
}