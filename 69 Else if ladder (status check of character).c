#include<stdio.h>
int main()

{
    char a;

    printf("input anything\n");
    scanf("%c",&a);

    if(a>=97 && a<=122)
    {
        printf("it is a lowercase alphabet\n");
        
    }
    else if(a>=65 && a<=90)
    {
        printf("it is upper case\n");
    }

    else if(a>=48 && a<=57)
    {
        printf("it is integer\n");
    }
    else
    {
        printf("it is other thing\n");
    }

    return 0;
}