#include <stdio.h> 
int main()
{
	int a,b,c,d;
	printf("Enter gross salary: ");
	scanf("%d",&a);

	if(a>10000)
	{	
	b=0.1*a;
	printf("\nYour allowances is 10 Percent: %.d",b);
	c=0.3*a;
	printf("\nYour deduction is 3 Percent: %.d",c);
	d=a+b-c;
	printf("\nThe net salary is: %.d",d);
	}
	else if(a>5000)
	{	
	b=0.7*a;
	printf("\nYour allowances is 7 Percent: %.d",b);
	c=0.2*a;
	printf("\nYour deduction is 2 Percent: %.d",c);
	d=a+b-c;
	printf("The net salary is: %.d",d);
   }
   else
   {
      printf("You're out of allowance and deduction bracket");
      printf("\nThe net salary is: %d",a);
   }
return 0;
}
