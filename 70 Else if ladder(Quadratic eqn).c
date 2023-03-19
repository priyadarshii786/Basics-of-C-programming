/*Write a C program to calculate the root of a Quadratic Equation. Go to the editor
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d, x1,x2;

    printf("Enter the value of a,b,c:\n"); //where a,b,c came from ax^2 + bx + c
    scanf("%d%d%d",&a,&b,&c);

    x1=b/2*a + sqrt(b*b-4*a*c)/2*a;
    x2=b/2*a - sqrt(b*b-4*a*c)/2*a;

    if(x1>0 && x2>0)
    {
        printf("Roots are real and unequal\n");

    }
    else if(x1==0 && x2==0)
    {
        printf("Roots are real and equal\n");

    }
    else
    {
        printf("Roots are imaginary and no solution\n");
    }

    return 0;

}