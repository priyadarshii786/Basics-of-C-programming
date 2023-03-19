#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++)
    {
        c=1;
        for(b=1;b<=5;b++)
        {
            if(b>=4-a && b<=2+a)
            {
                printf("%d",c);
                c++;
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