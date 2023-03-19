/* Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.*/


#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two coordinate point\n");
    scanf("%d%d",&a,&b);

    if(a>0 && b>0)
    printf("The quadrant point lies in the First quadrant\n");

    else if(a<0 && b>0)
    printf("The quadrant point lies in the second quadrant\n");

    else if(a<0 && b<0)
    printf("The quadrant point lies in the third quadrant\n");
    else
    printf("The quadrant point lies in the fourth quadrant\n");


    return 0;

}