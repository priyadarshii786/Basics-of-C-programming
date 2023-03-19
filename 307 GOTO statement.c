#include<stdio.h>
int main()
{
    goto start2;
    
    start1:
    printf("i am at the start 1 label\n");
    goto end;

    start2:
    printf("i am at the start 2 label\n");
    goto start1;

    end:
    printf("terminating the program\n");

    return 0;
}