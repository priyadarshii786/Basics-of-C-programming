/*-----------------when the break statement is encountered in the while loop or any of the loop which we will see later, the control immediately transfers to first statement out of the loop i.e. loop is exited prematurely. If there is nesting of loops the break will exit only from the current loop containing it----------------------*/

#include <stdio.h>
int main()
{
    int a;
    a = 1;

    while (a <= 5)
    {
        if (a == 3)
            break;

        printf("Inside the loop a=%d\n", a);
        a++;
    }

    printf("Outside the loop a=%d\n", a);

    return 0;
}