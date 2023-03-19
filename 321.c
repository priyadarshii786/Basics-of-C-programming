#include <stdio.h>
int main()
{
    void chikku(int);
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    chikku(a);
    printf("kaam khtm\n");

    return 0;
}

void chikku(int v)
{
    printf("the number is %d\n", v);
}