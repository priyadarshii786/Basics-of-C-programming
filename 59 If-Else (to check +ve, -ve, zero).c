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

    if(a<0)
    {
        printf("number is -ve");
    }

    return 0;

}

// Despite writing only three IF and no ELSE, program is giving desired output in every case.
// But that's not the case in later program.

