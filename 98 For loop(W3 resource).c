/*Write a program in C to display the pattern like right angle triangle using an asterisk.

The pattern like :

*
**
***
****   */


#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter no. of rows: ");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}


