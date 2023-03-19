#include<stdio.h>
int main()
{
    int a,b;

    for(a=1;a<=6;a++)
    {
        for(b=1;b<=6;b++)
        {
            if(b<=a)
            printf("*");

            else
            printf("&");  /*instead of space introduced new symbol to get printed */
        }

        printf("\n");
    }

    return 0;
}