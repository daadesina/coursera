#include <stdio.h>

int factorial(int n)
{	
	int result;
	if (n > 0)
	{
		return (n * factorial(n-1));
	}
	else
		return (1);
}

int main(void)
{
	int mymy = factorial(5);
	printf("%d\n", mymy);

	return (0);
}
	
