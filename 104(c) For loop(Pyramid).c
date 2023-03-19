/* NAHI RUN HOGA, REASON IS WRITTEN IN 103(b) */


#include<stdio.h>
int main()
{
    int a,b,c;
    char f;
    printf("enter no of rows");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=6;c++)   //column ka test condition dekho
        {
            if(c>=7-b)
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