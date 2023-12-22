#include <stdio.h>

int main(void)
{
	int arr[1000];

	int i, j, n;

	printf("Enter the length of the Array: ");
	scanf("%d", &n);

	for (j = 0; j < n; j++)
	{
		arr[j] = j+1;
	}


	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	return (0);
}
