#include <stdio.h>
void main()
{
    int em,work,OT,pay;
    for(em=1;em<=10;em++)
    {
         printf("\nEnter hours worked\n");
         scanf("%d",&work);
        if (work>=40)
        {
            OT=work-40;
            pay=12*OT;
            printf("Overtime pay for employee %d is  Rs.%d\n",em,pay);

        }
        else printf("No overtime\n");
    }
}
