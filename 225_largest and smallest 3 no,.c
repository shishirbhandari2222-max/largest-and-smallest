#include <stdio.h>
int main()
{
    /*This program prints largest and smallest in the values*/
    int a,b,c;
    printf("Enter 2 values.");
    scanf("%d%d",&a,&b);
    if (a == b && b == c)
        printf("All value are equal");
    else
    {
      if (a >= b && a >= c)
       printf("%d is the largest.\n",a);
    else
    if (b >= a && b >= c)
       printf("%d is the largest.\n",b);
    else
        printf("%d is the largest.\n",c);

    if (a <= b && a <= c)
        printf("%d is the smallest.\n",a);
    else
    if (b <= a && b <= c)
       printf("%d is the smallest.\n",b);
    else
        printf("%d is the smallest.\n",c);
    }
}

