#include<stdio.h>
int main()
{
    int orig,r;

    printf("Enter a number: \n");
    scanf("%d",&orig);

    while(orig!=0)
    {
       r=orig%10;      /*---------this step is basically used to get the remainder each time when divided by 10, and then storing it to the variable named r-----------*/

       printf("%d",r);     /*---------after getting remainder each time, we are printing it instantly */

       orig=orig/10;           /*----------THIS STEP IS NECESSARY TO DETERMINE WHEN WILL CONTROL COME OUT OF THE LOOP OR BASICALLY TO TERMINATE THE LOOP-----------*//*------------this step is basically used to know whether the original number has become zero or not while being in the loop. this operator gives the quotient.-------------*/

    }

    return 0;
}