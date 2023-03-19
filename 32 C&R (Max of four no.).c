#include<stdio.h>
int main()
{
    int a,b,c,d,max;

    printf("Enter four Integer no.:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    max=(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c)?(b>d?b:d):(c>d?c:d));
    //      <--yaha tk jb true hoga--> <--yaha tk jb false hoga-->
    //  <-brackett yaha open ho raha hai and yaha close ho raha hai->

    printf("maximum of %d %d %d and %d is %d:\n",a,b,c,d,max);

    return 0;

}