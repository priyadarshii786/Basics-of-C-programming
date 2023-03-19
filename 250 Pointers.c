#include<stdio.h>
int main()
{
    int a,*pa;
    float b,*pb;

    pa=&a;
    pb=&b;

    /* *pa=10;
    *pb=20.34; */

    a=10;
    b=20.34;

    printf("Address of a = %u\n",&a);
    printf("address of a = %u\n",pa);
    printf("address of a = %u\n",&*pa);

    printf("value of a = %d\n",a);
    printf("value of a = %d\n",*pa);
    printf("value of a = %d\n",*&a);

    return 0;
}