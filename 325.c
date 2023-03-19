#include <stdio.h>
int main()
{
    void babita(int);
    int a;
    printf("enter the number : \n");
    scanf("%d", &a);

    babita(a);
    return 0;
}
void babita(int jetha)
{
    printf("you had typed %d", jetha);
}