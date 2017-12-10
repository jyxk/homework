#include <stdio.h>
int fabonacci(int n);
int factorial_tail(int n, int acc1, int acc2);

int main(void)
{

	int n;

	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", factorial_tail(n, 1, 1));
	}
}

int fabonacci(int n)
{

	if (n == 1 || n == 2)
		return 1;
	else
		return fabonacci(n - 1) + fabonacci(n - 2);
}

int factorial_tail(int n, int acc1, int acc2)
{
	if (n < 2)
	{
		return acc1;
	}
	else
	{
		return factorial_tail(n - 1, acc2, acc1 + acc2);
	}
}