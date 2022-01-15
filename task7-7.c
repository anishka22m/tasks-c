#include <stdio.h>
void main()
{
    int n,p,z,num,i,nos;
    printf("Enter how many numbers you want to enter\n");
    scanf("%d",&num);
    p=0;
    n=0;
    z=0;
    for(i=1;i<=num;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&nos);
        if (nos<0) n++;
        else if (nos==0) z++;
        else if(nos>0) p++;
    }
    printf("Number of negative numbers is %d\n",n);
    printf("Number of positive numbers is %d\n",p);
    printf("Number of Zeroes is %d\n",z);



}
