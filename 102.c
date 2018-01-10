#include <stdio.h>

struct Date{
    int year, month, day;
} date;


int main(void){
    int n;
    int days;
    
    scanf("%d", &n);
    while(n--){
        scanf("%d%d%d", &date.year, &date.month, &date.day);

        days = date.day;
		switch(date.month)
		{
		case 12: days += 30;
		case 11: days += 31;
		case 10: days += 30;
		case 9:  days += 31;
		case 8:  days += 31;
		case 7:  days += 30;
		case 6:  days += 31;
		case 5:  days += 30;
		case 4:  days += 31;
		case 3:  days += (date.year%4==0 && date.year%100!=0) || date.year%400==0 ? 29:28; 
		case 2:  days += 31;
		}
        printf("%d\n", days);
        days = date.year = date.month = date.day = 0;

    }
    return 0;
}