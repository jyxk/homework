#include <stdio.h>

int main(void){
    int n;
    int j;
    int i;
    char *ptr;
    char str[10][10] = {};
    char result[100] = {};
    while(scanf("%d", &n) && n){
        for (i = 0; i < n; i++)
            scanf("%s", str[i]);
        ptr = result;
        for (i = 0; i < n; i++){
            for (j = 0; *(str[i] + j); j++){
				*ptr = *(*(str+i)+j);
				ptr++;
			}
        }
        printf("%s\n", result);
    }
    return 0;
}