/* NAHI RUN HOGA, REASON IS WRITTEN IN 103(b) */


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the no. of rows you want to get printed\n");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            if(c<=7-b)      //column ka test condition 104(b) se dekho
            printf("*");
            else
            printf(" ");
        }

        printf("\n");

    }

    return 0;
}