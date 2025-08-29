#include<stdio.h>
int main()
{       //Average of three subject
    float a,b,c,total,average;

    printf("Enter marks of subject 1: ");
    scanf("%f", &a);

    printf("Enter marks of subject 2: ");
    scanf("%f", &b);

    printf("Enter marks of subject 3: ");
    scanf("%f", &c);

    total =a+b+c;
    average = total/3;

    printf("\n Total marks =%.2f",total);
    printf("\n Average marks =%.2f",average);

   return 0;
}
