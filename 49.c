#include <stdio.h>

int main(void){
    int n;
    int j;
    int i;
    char *ptr;
    char str[100][100] = {};
    char result[10000] = {};
    while(scanf("%d", &n) && n){

        getchar();
        for (i = 0; i < n; i++){
            scanf("%[^\n]", str[i]);
            getchar();
        }
        
        ptr = result;
        for (i = 0; i < n; i++){
            for (j = 0; *(str[i] + j); j++){
				*ptr = *(*(str+i)+j);
				ptr++;
			}
        }
        *ptr = '\0';
        printf("%s\n", result);
    }
    return 0;
}