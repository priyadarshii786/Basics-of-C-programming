#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter three integer numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("Max of %d,%d and %d is %d",a,b,c,(a>b)?(a>c?a:c):(b>c?b:c));

    return 0;

}