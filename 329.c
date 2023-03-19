#include <stdio.h>
int main()
{
    int chikku(int);
    int jetha, babita;
    printf("enter the radius of the circle : \n");
    scanf("%d", &jetha);

    babita = chikku(jetha);

    printf("area of the circle is %d", 3 * babita);

    return 0;
}
int chikku(int iyer)
{
    return iyer * iyer;
}