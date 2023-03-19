#include <stdio.h>
int main()
{
    int serial(int);
    int jetha, babita;

    printf("enter the number : \n");
    scanf("%d", &jetha);

    babita = serial(jetha);

    printf("number = %d\nSquare of number = %d", jetha, babita);
}
int serial(int mehta)
{
    int daya;
    daya = mehta * mehta;

    return daya;
}