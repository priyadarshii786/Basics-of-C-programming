/*Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/


#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("Number1 and Number2 are equal\n");

    else
    printf("Number1 and Number2 are not equal\n");

    return 0;

}