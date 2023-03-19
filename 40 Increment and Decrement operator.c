#include<stdio.h>
int main()
{
    int x,y;
    x=10;

    y=++x;
    --x;
    y--;
    x=y++;
    y=--x;
    x=y++;

    printf("x=%d\n",x);
    printf("y=%d\n",y);

    return 0;
}