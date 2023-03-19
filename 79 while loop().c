// Printing all even no. between 1 and 30

#include<stdio.h>
int main()
{
    int a;
    a=1;

    while(a<30)
    {
        if(a%2==0)
        {
            printf("%d\t",a);
            a++;
        }
    }
    return 0;
}