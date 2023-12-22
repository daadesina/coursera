#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 2;
	int sum = a + b;
	
	int* ptr = &a;
	int* ppt = &b;

	printf("at %p + %p = %d\n", ptr, ppt, sum);
	printf("at %p + %p = %d\n", &a, &b, sum);

	return (0);
}
