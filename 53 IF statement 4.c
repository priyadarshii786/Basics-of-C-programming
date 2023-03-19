#include<stdio.h>
int main()
{
    int x;

    printf("Enter value of X:\n");
    scanf("%d",&x);

    if(x>=100)
    {
        printf("X is greater than or equal to 100\n");
        printf("you are thinking high\n");
        printf("you are learning Tathagat\n");
    }

    printf("X is less than 100");

    return 0;
}

// agar IF statement true rahega then all four statement written above will get printed irrespective of curly braces but agar IF statement false raha then only the last statement which is outside the curly braces will get printed.