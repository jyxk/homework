#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,n,c,s;
    while(scanf("%d",&n))
    {   if(n >= 3)
        {   for(a = 1,b = 0,s = 1;s<=n;s++)
                {
                printf ("%10d",a);
                if (s % 8 == 0)
                printf("\n");
                c = a;
                a = a + b;
                b = c;
                }
        }
        else if(n < 3 && n != 0) printf("Error!");
        else if(n == 0) break;
        printf("\n\n");
    }
    return 0;


}
