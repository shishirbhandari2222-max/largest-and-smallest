#include <stdio.h>
int main()
{
	// Area & perimeter of rectangles
	int length,breadth,area,perimeter;
	printf("Enter the length of rectangle:");
	scanf("%d",&length);
	
	printf("Enter the breadth of rectangle:");
	scanf("%d",&breadth);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	
	printf("Area of rectangle=%d\n",area);
	printf("Perimeter of rectangle=%d",perimeter);
	
	return 0;
}

