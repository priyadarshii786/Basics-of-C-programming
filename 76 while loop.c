#include<stdio.h>
int main()
{
    int t=5;
    while(t>=1);   //here we have introduced semicolon after the while. the semicolon after the while is called empty statement which is also the body of the while loop since no braces are there. Empty statement means doing nothing so while loop does nothing .
    {
        printf("t=%d\t",t--);
    }
    return 0;
}