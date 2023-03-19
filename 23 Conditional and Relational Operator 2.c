#include<stdio.h>
int main()
{
    int a=5,b=6,x;

    x=(a==b);

    x?printf("both are equal\n"):printf("both are not equal\n");

    return 0;
}