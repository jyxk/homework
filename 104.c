#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Web{
    char Acronym[20];
    char Fullname[40];
    char URL[50];
};

typedef struct Web WEB;

int main(void){
    int n;
    int i, j;

    WEB website[100];
    WEB webp[100];
    WEB temp;

    for (i = 0; i < 100; i++)
        webp[i] = website[i];

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf(" %s", website[i].Acronym);
        scanf(" %s", website[i].Fullname);
        scanf(" %s", website[i].URL);
    }

    for (i = 0; i < n; i++)
        webp[i] = website[i];

    for (i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(strcmp(webp[j].Acronym, webp[j+1].Acronym) > 0){
                temp = webp[j];
                webp[j] = webp[j + 1];
                webp[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++){
        printf("%-20s%-40s%s\n", website[i].Acronym, website[i].Fullname, website[i].URL);
    }
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%-20s%-40s%s\n", webp[i].Acronym, webp[i].Fullname, webp[i].URL);

        return 0;
}
