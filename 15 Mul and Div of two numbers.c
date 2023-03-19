#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    c=a*b;
    d=a/b;

    printf("Multiplication of %d and %d is %d\n",a,b,c);
    printf("Division of %d and %d is %d\n",a,b,d);


    return 0;



}