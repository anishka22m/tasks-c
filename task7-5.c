#include <stdio.h>
void main()
{
    int num,n,r,cube,sum;
    printf("Enter number\n");
    scanf("%d",&num);
    n=num;
    sum=0;
    while (num!=0)
    {
        r=num%10;
        cube=r*r*r;
        sum=sum+cube;
        num=num/10;

    }
    if (sum==n)
        printf("%d is an armstrong number",n);
    else printf("%d is not an armstrong number",n);
}
