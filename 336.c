#include <stdio.h>
int main()
{
    int chikku(int);
    int sonu, madhavi;
    printf("enter the number : \n");
    scanf("%d", &sonu);

    chikku(sonu);
    madhavi = chikku(sonu);

    printf("no. of digits in %d is %d", sonu, madhavi);
}

int chikku(int bhide)
{
    int mehta, jetha, daya = 0;

    for (mehta = 1; mehta <= bhide; mehta++)
    {
        bhide = bhide / 10;
        daya++;
    }

    return daya;
}