#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int diff = a - b;
	int mul = a * b;
	int div = a / b;
	int rem = a % b;

	printf("%d\n", sum);
	printf("%d\n", diff);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d\n", rem);
	return 0;
}