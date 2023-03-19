/*Write a program in C to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000 */


#include<stdio.h>
int main()
{
    int a,b,sum=0;
    float average;

    printf("Input the 10 numbers:\n");

    for(a=1;a<=10;a++)
    {
        printf("Number%d:",a);
        scanf("%d",&b);

        sum=sum+b;
    }

    average=sum/10.0;

    printf("The sum of %d no. is:%d\t",a,sum);
    printf("\nThe average is:%d\t",average);
    
    return 0;
    
    }