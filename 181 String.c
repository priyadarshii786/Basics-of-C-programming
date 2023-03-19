#include<stdio.h>
int main()
{
    char str[]="Tulika";
    int i=0;

    printf("Hello ");

    while(str[i]!='\0');
    {
        printf("%s",str[i++]);
    }
    return 0;
}