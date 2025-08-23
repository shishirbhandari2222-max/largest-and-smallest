#include <stdio.h>
int main()
{
	//Calculate interest
	float P,R,N,I;
	printf("Enter principal amount (P): ");
	scanf("%f",&P);
	
	printf("Enter rate of interest (R): ");
	scanf("%f",&R);
	
	printf("Enter time of years (N): ");
	scanf("%f",&N);
	
	I = P*R*N/100;
	printf("Simple interest is =%.3f\n",I);

    return 0;
}
