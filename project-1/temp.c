#include<stdio.h>

int main()

{
	float celsius, fahrenheit;
	
	printf("THE TEMPERATURE IN CELSIUS:");
	scanf("%f",&celsius);
	
	fahrenheit = (9/5*celsius) + 32;
	
	printf("THE TEMPERATURE IN FAHRENHEIT: %.2f\n",fahrenheit);
	
}