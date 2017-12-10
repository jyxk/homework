#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int x, y;
    while(scanf("%d%d", &x, &y) && x && y)
        printf("%d\n",gcd(x, y));

    return 0;
}

int gcd(int x, int y)
{
    if (x > y)
        return gcd(x - y, y);
    else if (x < y)
        return gcd(x, y - x);
    else
        return x;
}