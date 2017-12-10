#include<stdio.h>
#define CHANGE (firstc%2)

int main(void){
    char c, firstc;
    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        firstc = getchar();
        if(CHANGE){
            if(firstc >= 'A' && firstc <= 'Z')
                printf("%c", firstc  + 32);
            else if(firstc >= 'a' && firstc <= 'z')
                printf("%c", firstc - 32);
            else
                putchar(firstc);
        }
        else
            printf("%c", firstc);

        while ((c = getchar()) != '\n'){
            if(CHANGE){
                if(c >= 'A' && c <= 'Z')
                    printf("%c", c  + 32);
                else if(c >= 'a' && c <= 'z')
                    printf("%c", c - 32);
                else
                    putchar(c);
            }        
            else
                printf("%c", c);
        }
        putchar('\n');
    }

    return 0;
}