// To find the factorial of the given number.


#include<stdio.h>
int main()
{
    int a,b,c=1,d;
    printf("input the number\n");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        c=c*b;

    }
    
    printf("the factorial of %d is %d",a,c);
    return 0;

}