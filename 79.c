#include <stdio.h>

int nk(unsigned int n, int k);

int main(void)
{
    unsigned int n;
    int k;
    int ans;

    while (scanf("%u %d", &n, &k) != EOF)
    {
        ans = nk(n, k);
        printf("%d\n", ans);
    }

    return 0;
}

int nk(unsigned int n, int k)
{
    int i;
    long long int a = 1;
    if (k >= 11)
        return -1;
    for (i = 1; i < k; i++)
    {
        a *= 10;
    }
    /*    if(k >= 11 || a > (n*10))
        return -1;
    else
    return (n % a) / (a/10);
*/
    n /= a;
    if (n)
        return n % 10;
    else
        return -1;
}