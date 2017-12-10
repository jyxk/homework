#include<stdio.h>
#include<string.h>

int IsPal(char string[], int length);

int main(void){
    int n;
    char string[100];
    scanf("%d", &n);
    while(n--){
        scanf(" %[^\n]", string);
        int ans = IsPal(string, strlen(string));
        if(ans == 1)
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    return 0;
}

int IsPal(char string[], int length){
    if(length <= 1)
        return 1;
    else if(string[0] == string[length-1])
        return IsPal(string + 1, length - 2);
    else
        return 0;
}