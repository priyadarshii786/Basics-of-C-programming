#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer number:\n");
    scanf("%d",&a);

    if(a==0)
    {
        printf("number is zero");
    }
   
    
    if(a>0)
    {
        printf("number is +ve");
    }

    else
    {
        printf("number is -ve");
    }

    return 0;

}

// this is book's method, but here it is not showing desired output as when we are entering zero then both 'number is zero' and 'number is -ve' get printed. Apart from this there is no any problem in entering +ve and -ve number.