#include <stdio.h>
int main()
{   
    //convert grams into kg
	int kg,result;
	printf("Enter amount in kg:");
	scanf("%d",&kg);
	
	result=kg*1000;
	printf("result=%dgram\n",result);
	
  return 0;
}
