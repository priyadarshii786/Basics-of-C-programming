#include <stdio.h>
int main()
{
    void sodhii(int, char, float);

    int bhide;
    char mehta;
    float hathi;

    printf("enter an int, char, and a float : \n");
    scanf("%d%c%f", &bhide, &mehta, &hathi);

    sodhii(bhide, mehta, hathi);
    printf("\nserial khatm\n");
    return 0;
}
void sodhii(int tappu, char goli, float hathi)
{
    printf("You entered \n int=%d\n char=%c\n float=%f", tappu, goli, hathi);
}