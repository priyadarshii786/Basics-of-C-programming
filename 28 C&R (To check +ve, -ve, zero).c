#include<stdio.h>
int main()
{
    int a;

    printf("Enter an Integer number:");
    scanf("%d",&a);

    (a==0)?printf("Number is zero"):(a>0)?printf("Number is Positive"):printf("Number is Negative");

    return 0;
}