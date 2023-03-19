/*Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/


#include<stdio.h>
int main()
{
    int a;
    
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%2==0)   //equal to operator use kiye hai na ki assignment operator.
    printf("%d is an even integer\n",a);

    else
    printf("%d is an odd integer\n",a);

    return 0;
}