#include<stdio.h>
int main()
{
    int c,a=10,b=20;
    
    c=(a>=30 || b==30);

    printf("Returned value of c:%d",c);

    return 0;

}