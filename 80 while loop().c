/* Printing no. between 1 and 100 which are completely divisible by 3 and 5.*/

#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100)
    if(a%3==0 && a%5==0)
    printf("%d\t",a++);

    return 0;
}