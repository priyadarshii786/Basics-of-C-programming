#include<stdio.h>
int main()
{
    int marks;

    printf("Enter the marks of student: \n");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("A division\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("B division\n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("C division\n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("D division\n");
    }
    else
    printf("FAIL\n");

    return 0;

}