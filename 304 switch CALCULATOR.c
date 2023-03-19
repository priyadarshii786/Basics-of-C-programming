#include<stdio.h>
#include<stdlib.h>
int main()
{
    enum opr
    {
        add=1,sub,mul,div
    };


    float n1,n2,ans;
    int choice;

    printf("Enter two numbers: \n");
    scanf("%f%f",n1,n2);

    printf("What operation you want to perform\n");

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    scanf("%d",&choice);

    switch(choice)
    {
        default:
        printf("Better you know numbers\n");

        case add:
        ans=n1+n2;
        printf("Addition is %f\n",ans);
        break;

        case sub:
        ans=n1-n2;
        printf("Subtraction is %f\n",ans);
        break;

        case mul:
        ans=n1*n2;
        printf("Multiplication is %f\n",ans);
        break;

        case div:
        if(n2==0)
        {
            printf("Division is not allowed\n");
            return 0;
            exit(0);

        }
        else
        {
            ans=n1/n2;
            printf("Division is %f\n",ans);
            break;
        }
    }

    return 0;

}