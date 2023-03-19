#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    f=(a>b?(a>c?a>d?(a>e?a:e):())):());

    return 0;
}