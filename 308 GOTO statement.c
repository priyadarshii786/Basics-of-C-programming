#include<stdio.h>
int main()
{
    int n=0;

    printf("Loop starts\n");

    loop: n++;
    printf("n=%d\n",n);

    if(n<5)
    {
        goto loop;

    }

    printf("Loop ends\n");8

    return 0;
}
