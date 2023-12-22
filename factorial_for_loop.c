#include <stdio.h>

int main(void)
{
	int n = 5;
	int i, j = 1;

	for (i = n; i > 0; i--)
	{
		j = j * i;
	}
	printf("%d\n", j);

	return (0);
}
