#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer number:\n");
    scanf("%d",&a);

    if(a%2!=0)
    {
        printf("It is an odd number.");
    }
    else
    {
        printf("It is a even number.");
    }
    return 0;
}