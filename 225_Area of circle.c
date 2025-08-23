#include<stdio.h>
int main()
{
	//Area of circle
	float R,Area;
	printf("Enter the radius of the circle: ");
	scanf("%f",&R);
	
	Area=(22.0/7.0) *R*R;
	
	printf("Area of circle=%.2f\n",Area);
	return 0;
}


