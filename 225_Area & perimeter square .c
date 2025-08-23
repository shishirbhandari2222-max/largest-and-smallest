#include <stdio.h>
int main()
{
	// Area & perimeter of square
	int length,area,perimeter;
	printf("Enter the length of square:");
	scanf("%d",&length);
	
	area=length*length;
	perimeter=4*length;
	
	printf("Area of square=%d\n",area);
	printf("Perimeter of square=%d",perimeter);
	
	return 0;
}

