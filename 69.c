#include<stdio.h>

int main(void){

    int year, month, day, ans = 0;
    int days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(1){
        scanf("%d %d %d", &year, &month, &day);
        if((year%4 == 0) && (year%100) || (year%400 == 0))
            days[1] = 29;
        else
            days[1] = 28;
        if(month == 1){
            ans = day;
            printf("����������һ���еĵ�%d��\n", ans);
        }
        else{
            for(int i = 0; i < month-1; i++)
                ans += days[i];
        printf("����������һ���еĵ�%d��\n", ans + day);
        }
    ans = year = month = day = ans = 0;
    }
    return 0;
}