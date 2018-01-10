#include <stdio.h>

struct Student{
    int num;
    char name[19];
    double score;
};
typedef struct Student data;

int main(void){
    data s[3];
    const data *p = s;
    int n;

    scanf("%d", &n);

    while(n--){
        int i, j;
        for (i = 0; i < 3; i++){
            scanf("%d", &s[i].num);
            scanf(" %s", s[i].name);
            scanf(" %lf", &s[i].score);
        }

        for (j = 0; j < 3; j++){
            printf("%d\t%-20s%lf\n", s[j].num, s[j].name, s[j].score);
        }
        for (j = 0; j < 3; j++){
            printf("%d\t%-20s%lf\n", (p+j)->num, (p+j)->name, (p+j)->score);
        }
        
    }
    return 0;
}