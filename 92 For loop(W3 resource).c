/*Write a C program to find the sum of first 10 natural numbers
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55 */


#include<stdio.h>
int main()
{
    int a,sum=0; /*yaha sum ko 0 initialise kiye hai*/

    printf("The first 10 natural number is:\n",a);  /*yaha se sirf above written statement print hoga, first 10 natural no. kon se hai ye pata krne ke liye ab niche for loop chalaenge*/

    
    for(a=1;a<=10;a++)
    {

        sum=sum+a;
        printf("%d",a);
    }
    
    printf("\nThe sum is:%d\n",sum);


    return 0;
}