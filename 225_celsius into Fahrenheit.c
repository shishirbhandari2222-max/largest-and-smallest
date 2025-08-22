#include<stdio.h>
int main()
{
	//convert celsius into fahrenheit
	float celsius,fahrenheit;
	printf("Enter temperture in celsius ");
	scanf("%f",&celsius);
	
	fahrenheit=9.0/5.0*celsius+32;

	printf("temperture in fahrenheit=%f",fahrenheit);
	
	return 0;
}
