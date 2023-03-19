/*To print upside down right angled triangle
                 *****
                  ****
                   ***
                    **
                     *   */
                     
#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            if(b>=a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}