#include<stdio.h>
#include<ctype.h>
#define CHA 10
#define OTH 11

int main(void){

    char ch;
    int count[15] = {};
    while((ch = getchar()) != '#'){

        if(isalpha(ch)){
            count[CHA]++;
        }
        else if(isdigit(ch)){
            switch (ch){
                case '0':
                    count[0]++;
                    break;
                case '1':
                    count[1]++;
                    break;
                case '2':
                    count[2]++;
                    break;
                case '3':
                    count[3]++;
                    break;
                case '4':
                    count[4]++;
                    break;
                case '5':
                    count[5]++;
                    break;
                case '6':
                    count[6]++;
                    break;
                case '7':
                    count[7]++;
                    break;
                case '8':
                    count[8]++;
                    break;
                case '9':
                    count[9]++;
                    break;
            }
        }
        else
            count[OTH]++;
    }
    
    int i;
    for (i = 0; i < 10; i++)
        printf("Number %d: %d\n", i, count[i]);
    printf("characters: %d\n", count[CHA]);
    printf("other: %d\n", count[OTH]);

    return 0;
}