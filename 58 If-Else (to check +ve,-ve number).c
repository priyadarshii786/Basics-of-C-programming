#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer number:\n");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("It is an +ve number.");
    }
    else
    {
        printf("It is a -ve number.");
    }
    return 0;
}