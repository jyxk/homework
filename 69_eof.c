#include<stdio.h>
#include<stdlib.h>

int main(void){

    int year, month, day, ans = 0;
    int days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(scanf("%d %d %d", &year, &month, &day) != EOF){
        
        if((year%4 == 0) && (year%100) || (year%400 == 0))
            days[1] = 29;
        else
            days[1] = 28;
        if(month == 1){
            ans = day;
            printf("该日期是这一年中的第%d天\n", ans);
        }
        else{
            for(int i = 0; i < month-1; i++)
                ans += days[i];
        printf("该日期是这一年中的第%d天\n", ans + day);
        }
    ans = year = month = day = ans = 0;

    if(getchar() == EOF)
        exit(EXIT_SUCCESS);
    }
    return 0;
}