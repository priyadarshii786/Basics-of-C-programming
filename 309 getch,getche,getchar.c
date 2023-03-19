#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<stdlib.h>
int main()
{
    char a,b,c;

    printf("Enter any character\n");
    a=getch();

    /*printf("Enter any character\n");
    b=getche(); */

    printf("Enter any character\n");
    c=getchar();

    printf("Entered characters are %c%c%c\n",a,b,c);

    return 0;



}