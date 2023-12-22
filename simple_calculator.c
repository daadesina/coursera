#include <stdio.h>

int main(void)
{
	int a, b;
	char sign;
	
	printf("WELCOME TO ADETEJU TECH-WORLD\n");

	while (1)
	{
		printf("What do want to calculate?\n");
		scanf("%d%c%d", &a, &sign, &b);
		
		switch (sign)
		{
			case '+':
				printf("%d%c%d = %d\n", a,sign,b, a+b);
				break;
			case '-':
				printf("%d%c%d = %d\n", a, sign, b, a-b);
				break;
			case '*':
				printf("%d%c%d = %d\n", a, sign, b, a*b);
				break;
			case '/':
				printf("%d%c%d = %d\n", a, sign, b, a/b);
				break;	
			default:
				printf("INVALID INPUT! Don't use space.\n");
		}
	}

	return (0);
}
