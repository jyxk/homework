#include<stdio.h>
#include<math.h>

int IsPrime(int n);

int main(void){
    int i, j, k = 0;
    int begin, end;
    while(scanf("%d%d", &begin, &end) && begin){
        for (j = begin; j <= end; j++){
            if(j%2)
                continue;
            else
                for (i = 2; i < j; i++){

                    if(IsPrime(i) && IsPrime(j-i)){
                        printf("%d=%d+%d\n", j, i, j - i);
                        break;
                    }
                    //k++;
                    //if(!(k%5))
                    //    break;
                }
        }
        printf("\n");
    }

        return 0;
}

int IsPrime(int n){
    int i;
    if(n == 1)
        return 0;

    for (i = 2; i <= (int)sqrt(n); i++)
        if(n%i == 0)
            return 0;

        return 1;
}