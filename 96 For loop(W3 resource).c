/*Write a program in C to display the multiplication table of a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 */


#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Input the number(Table to be calculated) :");
    scanf("%d",&a);

    for(b=1;b<=10;b++)
    {
        
        printf("%d*%d=%d\n",a,b,a*b);

    }
    return 0;


}