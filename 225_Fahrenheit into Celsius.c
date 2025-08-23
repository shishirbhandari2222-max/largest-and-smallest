#include<stdio.h>
int main()
{
	//Fahrenheit into celsius
	float fahrenheit,celsius;
	printf("Enter temperture in Fahrenheit:");
	scanf("%f",&fahrenheit);
	
	celsius=5.0/9.0*(fahrenheit-32);
	printf("Temperture in Celsius=%.3f",celsius);
	
	return 0;
}
