#include <stdio.h>
int main()
{
    int serial(int);

    int jetha, babita;
    printf("enter the number: \n");
    scanf("%d", &jetha);

    serial(jetha);
    babita = serial(jetha);

    printf("factorial of %d is %d", jetha, babita);

    return 0;
}
int serial(int popat)
{
    int i, ans = 1;

    if (popat < 1)
    {
        return 0;
    }
    if (popat > 1)
    {
        for (i = 1; i <= popat; i++)
        {
            ans = ans * i;
        }
        return ans;
    }
}