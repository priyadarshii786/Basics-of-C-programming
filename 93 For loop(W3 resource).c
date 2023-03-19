/*Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28 */



#include<stdio.h>
int main()
{
    int a,b,sum=0;

    printf("Enter a natural no.:\n");
    scanf("%d",&a);

    printf("The first %d natural number is:\n",a);


    for(b=1;b<=a;b++)
    {
        printf("%d\t",b);

        sum=sum+b;  /*sum ko loop ke andar rakhe hai as sum ko baar baar update hote rahna hai*/

    }
    
    printf("The sum of natural number upto %d terms:%d\n",a,sum);

    return 0;
}