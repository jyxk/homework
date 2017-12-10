#include<stdio.h>

enum month{
    jan = 31, feb = 28, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31,
    sep = 30, oct = 31, nov = 30, dec = 31
} month;

int IsR(int a){
    if((a % 100 == 0) && (a % 400 == 0))
        return 1;
    else if(a % 4 == 0)
        return 1;
    else 
        return 0;
}

int main(void){

    int year;
    scanf("%d", &year);

    printf("January,31\n");
    if(IsR(year))
        printf("February,29\n");
    else 
    printf("February,28\n");    
    printf("March,31\n");
    printf("April,30\n");
    printf("May,31\n");
    printf("June,30\n");
    printf("July,31\n");
    printf("August,31\n");
    printf("September,30\n");
    printf("October,31\n");
    printf("November,30\n");
    printf("December,31\n");
    
    return 0;
}