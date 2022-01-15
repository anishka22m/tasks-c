#include <stdio.h>
#include <math.h>
void main()
{
    int num1,num2,result;
    printf("Enter base number\n");
    scanf("%d",&num1);
    printf("Enter exponent number\n");
    scanf("%d",&num2);
    result=pow(num1,num2);
    printf("%d raised to power %d is %d",num1,num2,result);
}
