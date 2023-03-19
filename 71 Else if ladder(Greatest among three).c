#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);

    // printf("1st number=%d"a);
    // printf("2nd number=%d"b);
    //printf("3rd number=%d"c);

    if(a>b && a>c)
    printf("1st number is the greatest among three.\n");

    else if(b>a && b>c)
    printf("2nd number is the greatest among three.\n");

    else
    printf("3rd number is the greatest among three.\n");

    return 0;

}