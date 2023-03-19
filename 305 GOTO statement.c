#include<stdio.h>
#include<math.h>
int main()
{
    int x;

    start:    /*------------this is termed as label-----------*/
    printf("enter a positive number\n");
    scanf("%d",&x);

    if(x<0)
    {
        goto start;    /*-------------------when a negative number is entered if condition returns true and control is transferred back to start using goto start; statement. In the program the jump is backward hence it is a backward jump-------------------*/
        printf("sqrt of number is %f\n",sqrt(x));
    }
    return 0;
}