#include <stdio.h>
int main()
{
    int num;
    printf("Enter 0,1 or 2\n");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("You entered zero\n");
        break;

    case 1:
        printf("You entered one\n");
        break;

    case 2:
        printf("You entered two\n");
        break;

    default:
        printf("Other than 0,1 or 2\n");
    }

    return 0;
}