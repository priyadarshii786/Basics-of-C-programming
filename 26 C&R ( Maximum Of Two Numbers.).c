#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    c=a>b?a:b;

    printf("max of %d and %d is %d\n",a,b,c);

    return 0;
    
}