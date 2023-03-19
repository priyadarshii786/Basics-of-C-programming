#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character:\n");
    scanf("%c",&x);

    if(x>=97 && x<=122)
    {
        printf("you have entered Lower case\n");
    }
    else if(x>=65 && x<=90)
    {
        printf("you have entered Upper case\n");
    }
    else if(x>=48 && x<=57)
    {
        printf("you have entered a digit\n");
    }
    else
    {
        printf("you entered a special symbol\n");
    }

    return 0;
}