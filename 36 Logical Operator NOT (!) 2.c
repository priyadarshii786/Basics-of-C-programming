#include<stdio.h>
int main()
{
    int a=5,b=6,c;

    c=!(a>=5 && b>=6);

    printf("Returned value is:%d",c);

    return 0;

}