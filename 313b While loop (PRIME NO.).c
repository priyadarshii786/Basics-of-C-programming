#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,c=2;
    printf("Enter the number: \n");
    scanf("%d",&num);

    while(c<=num/2)  /*------------loop will only run to the half of the particular number------------*/
    {
        if(num%c==0)
        {
            printf("Number is not Prime.\n");
            exit(0);
        }
        
         c++;
        
        printf("Number is Prime.\n");
    }

    return 0;
}