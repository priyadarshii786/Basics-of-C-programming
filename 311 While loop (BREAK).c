#include <stdio.h>
int main()
{
    int num;

    while (4 != 0)
    {

        printf("Enter a number: \n");
        scanf("%d", &num);

        if (num == -99)

            break;

        printf("Square of number is %d", num * num);
    }

    return 0;
}