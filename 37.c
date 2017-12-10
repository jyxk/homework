#include<stdio.h>

void mycpy(char s[], char t[], int n);

int main(void){
    int i, n;
    char s[1000], t[1000];

    scanf("%d", &i);
    getchar();
    while(i--){
        scanf("%[^\n]", t);
        getchar();
        scanf("%d", &n);
        getchar();
        mycpy(s, t, n);
        printf("%s\n", s);
    }
    return 0;
}

void mycpy(char s[], char t[], int n){
    s[n] = '\0';
    while(n--)
        s[n] = t[n];
}