#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter the number: \n");
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;     /*-------------modulus operator is used instead of remainder operator because it is the modulus operator which determines when to come out of the loop or basically to terminate the loop-------------*/
        count++;
    }

    printf("Number of digits are: %d\n",count);

    return 0;
}