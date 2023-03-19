#include<stdio.h>
#include<process.h>  //Here we are using this pre-processor directive because later on in this program we have used exit()
int main()
{
    int a;
    printf("Enter an integer number:\n");
    scanf("%d",&a);

    if(a==0)
    {
        printf("number is zero\n");
        exit(0);  
        // exit()is the in-built library function to terminate the program. Any positive number may be given as argument. Here we have given 0 as argument in exit()
    }

    if(a>0)
    {
        printf("number is +ve\n");
    }

    if(a<0)
    {
        printf("number is -ve\n");
    }

    return 0;
    
}