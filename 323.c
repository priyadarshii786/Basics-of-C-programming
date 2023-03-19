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
    if (v > w)
    {
        printf("%d is greater than %d\n", v, w);
    }
    else
    {
        printf("%d is greater than %d\n", w, v);
    }
}