#include <stdio.h>
int main()
{
    int chikku(int);
    int jetha, babita;
    printf("Enter a number : \n");
    scanf("%d", &jetha);

    chikku(jetha);

    babita = chikku(jetha);
    printf("the factorial of %d is %d", jetha, babita);

    return 0;
}

int chikku(int tappu)
{
    return (tappu < 1 ? 1 : tappu * chikku(tappu - 1));
}