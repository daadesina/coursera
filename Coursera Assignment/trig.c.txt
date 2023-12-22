#include <stdio.h>
#include <math.h>

#define PI 3.14285714286

void trig(void)
{
	double count;
	double my_sine;
	double my_cosine;
	printf("%6s%30s\n", "SINE", "COSINE");

	for (count = 0.0; count <= 1.0; count = count + 0.1)
	{
		my_sine = sin(count * PI / 180);
		my_cosine = cos(count * PI / 180);

		printf("%lf%21s%lf\n", my_sine, " ", my_cosine);
	}
}

int main(void)
{
	trig();
	return (0);
}
