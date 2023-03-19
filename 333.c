#include <stdio.h>
int main()
{
    int chikkuu(int);
    int jetha, bapuji;
    printf("Enter the number : \n");
    scanf("%d", &jetha);

    chikkuu(jetha);
    bapuji = chikkuu(jetha);

    printf("\nnumber of digits in %d are : %d\n", jetha, bapuji);
}

int chikkuu(int popat)
{
    int madhvi, bhide = 0;
    for (madhvi = 1; madhvi <= popat; madhvi++)
    {
        popat = popat / 10;
        bhide++;
    }
    return bhide;
}