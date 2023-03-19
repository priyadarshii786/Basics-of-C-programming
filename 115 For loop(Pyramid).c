#include<stdio.h>
int main()
{
    int i,j,k=0;

    for(i=1;i<=7;i++)
    {
        k<=4?k++:k--;
        
        for(j=1;j<=4;j++)
        {
            if(i<=k)
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