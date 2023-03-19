#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("enter two integer number:\n");
    scanf("%d%d",&a,&b);

    c=a/b;
    d=a%b;

    printf("a=%d,b=%d\n",a,b);
    printf("quotient=%d\tRemainder=%d",c,d);

    return 0;
}