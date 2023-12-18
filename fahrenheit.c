#include <stdio.h>

double far_to_cel(double num);
double cel_to_far(double num);

/**
 * 
 *
 */
double far_to_cel(double num)
{
	double cel;
	
	cel = (num - 32) * (5/9.0);
	//printf("%lf\n", cel);
	return (cel);
}

double cel_to_far(double num)
{
	double far;
	
	far = (num * 1.8) + 32.0;
	//printf("%lf\n", far);
	return (far);
}

int main(void)
{
	double input;
	int count = 0;
	
	while (input != 0)
	{
		printf("Enter a number. Enter 0 if you want to exit\n");
		scanf("%lf", &input);
	
		if (input != 0)
		{
			printf("The input to celsius is: %lf\n", far_to_cel(input));
			//far_to_cel(input);
	
			printf("The input to fahreheit is: %lf\n", cel_to_far(input));
			//cel_to_far(input);
		}
		else
			printf("EXIT");

		count++;
	}

	return (0);
}


