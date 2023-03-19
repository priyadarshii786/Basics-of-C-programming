#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    (a==b)?printf("%d is equal to %d",a,b):(a<b)?printf("%d is Maximum\n",b):("%d is Maximum\n",a);

    return 0;

    
}