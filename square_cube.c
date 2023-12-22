#include <stdio.h>
#include <math.h>

void normal(void)
{
	double arr1[1000];
	double arr2[1000];
	double arr3[1000];

	int i, j, n;
	double k;

	printf("I want square and cube for 1 to n, whare n is: ");
	scanf("%d", &n);
	printf("Square and cubes by interval of 0.1\n");
	for (j = 0; j < n*10; j++)
	{
		arr1[j] = (j+10)*0.1;
		arr2[j] = pow(arr1[j], 2);
		arr3[j] = pow(arr1[j], 3);
	}


	for (i = 0; i < n*10; i++)
	{
		printf("%lf%15s%lf%15s%lf\n", arr1[i], "", arr2[i], "", arr3[i]);
	}
}

int main(void)
{
	normal();

	return (0);
}
