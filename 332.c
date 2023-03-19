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
    if (tappu >= 'A' && tappu <= 'Z')
    {
        babita = tappu + 32;
    }
    else if (tappu >= 'a' && tappu <= 'z')
    {
        babita = tappu - 32;
    }

    printf("The case conversion of %c is %c", tappu, babita);
}