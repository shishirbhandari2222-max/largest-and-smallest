#include <stdio.h>
int main()
{  //add,subtract,multiply,divide;
    float num1,num2,add,subtract,multiply,divide;
    printf("Enter first number:");
    scanf("%f",&num1);
     
	printf("Enter second number:");
    scanf("%f",&num2);
    
    //calcutions
    add = num1+num2;
    subtract = num1-num2;
	multiply = num1*num2;
    divide = num1/num2;

	printf("Add=%.2f\n",add);
	printf("Subtract=%.2f\n",subtract);
	printf("Multiply=%.2f\n",multiply);
	printf("divide=%.2f\n",divide);  
    
    return 0;
}
