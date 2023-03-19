#include<stdio.h>
#include<ctype.h>   /*----------------introducing this header file because it contains in-built function tolower---------------*/
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);

    ch=tolower(ch);   /*-------------convert a character from upper case to lower case. Whether you input vowel in upper case or lower case it is passed to switch block in lower case. Must put semicolon at the last--------------*/

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("You entered a vowel\n");
        break;

        default:
        printf("you entered a consonant\n");

    }

    return 0;
}