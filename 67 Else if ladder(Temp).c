#include<stdio.h>
int main()
{
    int temp;

    printf("Enter the temperature:\t");
    scanf("%d",&temp);

    if(temp<0)
    printf("Freezing weather\n");

    else if(temp>=0 && temp<10)
    printf("very cold weather\n");

    else if(temp>10 && temp<20)
    printf("Cold weather\n");

    else if(temp>20 && temp<30)
    printf("Normal temperature.\n");

    else if(temp>30 && temp<40)
    printf("It's Hot\n");

    else
    printf("It's very hot\n");


    return 0;


}