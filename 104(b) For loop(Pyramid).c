#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            if(b>=6-a)
            printf("*");

            else
            {
                printf("$"); /*instead of space introduced new symbol to get printed */
            }
        
        }

        printf("\n");
    }

    return 0;
}