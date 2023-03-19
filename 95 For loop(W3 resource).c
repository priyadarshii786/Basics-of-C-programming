/*Write a program in C to display the cube of the number upto given an integer.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125*/



#include<stdio.h>
int main()
{
    int a,b,cube=0;

    printf("Input number of terms:\t");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        cube=b*b*b;

        printf("Number is:%d\tand the cube of the %d is:%d\n",b,b,cube);

    }

    return 0;


}