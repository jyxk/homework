#include<stdio.h>

int cptsum(int startnum);
int roll(int sum);

int main(void){

    int n, x = 2;
    int startnuma, startnumb, temp;
    int rollpoint;

    scanf("%d", &n);

    while(n--){

        scanf("%d%d", &startnuma, &startnumb);
        rollpoint = roll(cptsum(startnuma)) + roll(cptsum(startnumb));
        
        if(rollpoint == 7 || rollpoint == 11)
            printf("success!\n");
        else if(rollpoint == 2 || rollpoint == 3 || rollpoint == 12)
            printf("fail!\n");
        else{
            int a, b;
            temp = rollpoint;
            rollpoint = -1;
            x = 2;
            while(temp != rollpoint && rollpoint != 7){
                a = cptsum(startnuma + x - 1);
                b = cptsum(startnumb + x - 1);
                rollpoint = roll(a) + roll(b);
                x++;
            }
            
            if(temp == rollpoint)
                printf("success!\n");
            else if(rollpoint == 7)
                printf("fail!\n");
        }
        
    }

    return 0;
}

int cptsum(int startnum){
    int sum = 0;

    while(startnum>0){
        sum += startnum % 10;
        startnum /= 10;
    }

    return sum;
}

int roll(int sum){
    int step;
    step = sum % 6;
    return step + 1;
}
