#include<stdio.h> 
int main()
{
	/*Convert Dollar into pound*/ 
	 float dollar,pound,rupee;
	printf("Enter amount in dollar:");
	scanf("%f",&dollar);
	
	rupee=dollar*48;
	pound=rupee/70;
	printf("Pound is:%.3f",pound);	
return 0;	
}
