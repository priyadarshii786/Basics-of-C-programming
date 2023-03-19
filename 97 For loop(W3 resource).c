/*Write a program in C to display the multiplication table vertically from 1 to n.
Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80 */


#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Input upto the table number starting from 1 : ");
    scanf("%d",&a);

    printf("Multiplication table from 1 to %d\n",a);

    for(b=1;b<=10;b++)
    {
        for(c=1;c<=a;c++)
        {
            if(c<=a-1)
            {
                printf("%d*%d=%d\t",c,b,b*c);
            }
            else
            {
                printf("%d*%d=%d\t",c,b,b*c);
            }

        }
        
        printf("\n");  

    }
    return 0;

}