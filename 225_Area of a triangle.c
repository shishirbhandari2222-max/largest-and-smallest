#include<stdio.h>
int main()
{
	//Area of a triangle
	int H,L,Area;
	printf("Enter the height of the triangle:");
	scanf("%d",&H);
	printf("Enter the length of the triangle:");
	scanf("%d",&L);
	
	Area=(H*L)/2;
	printf("Area of triangle=%d",Area);
	return 0;
}
