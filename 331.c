#include <stdio.h>
int main()
{
    void tmkocc(char);
    char jetha;
    printf("Enter a character : \n");
    scanf("%c", &jetha);
    tmkocc(jetha);
    printf("\nserial khtm");
    return 0;
}
void tmkocc(char tappu)
{
    char babita;
    if (tappu >= 65 && tappu <= 90)
    {
        babita = tappu + 32;
    }
    else if (tappu >= 97 && tappu <= 122)
    {
        babita = tappu - 32;
    }

    printf("The case conversion of %c is %c", tappu, babita);
}