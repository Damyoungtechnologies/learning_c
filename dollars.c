#include <stdio.h>

int main (void)
{
	float D;
	float N;
	float amount;
	do
	{
		printf("Input your the value that you want to convert to Dollars");
		scanf("%f", &D);
		amount = D / 765.16742;
		printf("The amount in dollars is %.2f\n", amount);



	}
	while (D);



}
