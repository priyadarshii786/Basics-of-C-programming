#include <stdio.h>
int main()
{
    void chikku(int, int);
    int a, b;
    printf("Enter two number: \n");
    scanf("%d%d", &a, &b);

    chikku(a, b);
    printf("kaam khtm\n");

    return 0;
}

void chikku(int v, int w)
{
    printf("the sum of %d and %d is %d\n", v, w, v + w);
}