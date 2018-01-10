#include <stdio.h>

struct Date{
    int year, month, day;
} Date;


int main(void){
    int n;
    int days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ans;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d", &Date.year, &Date.month, &Date.day);

        if(((Date.year%4 == 0) && (Date.year%100)) || (Date.year%400 == 0))
            days[1] = 29;
        else
            days[1] = 28;
        if(Date.month == 1){
            ans = Date.day;
            printf("%d\n", ans);
        }
        else{
            for(int i = 0; i < Date.month-1; i++)
                ans += days[i];
        printf("%d\n", ans + Date.day);
        }
    ans = Date.year = Date.month = Date.day = 0;

    }
    return 0;
}