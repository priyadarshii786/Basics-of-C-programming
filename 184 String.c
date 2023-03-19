                  /*------Length of String without strlen-------*/


#include<stdio.h>
int main()
{
    char str[20];
    int i;

    printf("Enter your name\n");
    scanf("%d",str);

    printf("Hello %s\n",str);

    for(i=0;str[i]!=0;i++);  /*-------here we have introduced semicolom after for loop, the semicolon serves as a empty statement here-------*/

    /*------this program demonstrates how you can find length of a string without the use of strlen. You can start checking simply each character of the string whether it is equal to null character '\0' or 0 (ASCII value of null character). If it is not, just incrtment control variable and in the end display its value which will be the length of the string------ */

    
    {
        printf("length=%d\n",i);
    }
    return 0;
}