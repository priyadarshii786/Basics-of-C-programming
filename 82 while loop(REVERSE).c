/*------------to reverse the number------------*/


#include<stdio.h>
int main()
{
    int orig,rev=0,r;

    printf("Enter a number: \n");
    scanf("%d",&orig);

    while(orig!=0)          /*--------the condition in while can also be written as while(orig)-------------*/
    {
        r=orig%10;           /*------this step is used to get the remainder when original number is divided by 10 and then after storing it(remainder) in the new variable named r---------*/

        rev=rev*10+r;       /*--------this step is used to get the exact reversed number. Initially we have declared the value of rev as zero, and then multiplied the each reversed value by 10 and adding remainder to it-----------*/

        orig=orig/10;        /*----------THIS STEP IS NECESSARY TO DETERMINE WHEN WILL CONTROL COME OUT OF THE LOOP OR BASICALLY TO TERMINATE THE LOOP-----------*/ /*------------this step is basically used to know whether the original number has become zero or not while being in the loop. this operator gives the quotient.-------------*/

    }

    printf("Reversed number is %d",rev);

    return 0;
}