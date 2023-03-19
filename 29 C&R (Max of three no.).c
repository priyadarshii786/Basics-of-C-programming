#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    
    printf("Enter three integer numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    d=(a>b)?a:b;
    max=(c>d)?c:d;

    printf("Max of %d,%d and %d is %d",a,b,c,max);

    return 0;

}