#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter two integers: ");

	int a, b;
	scanf("%d %d", &a, &b);

	if (a % b == 0)
	{
		printf("The first number is a multiple of the second.");
	}
	else
	{
		printf("The first number isn't a multiple of the second.");
	}
	return 0;
}