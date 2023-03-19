                  /*------Finding length of string using strlen------*/


#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int length,size;

    printf("Enter your name\n");
    scanf("%s",&str);   /*-----book me yaha pr only str hai not &str. Lekin run dono se hi ho raha hai-----*/

    printf("Hello %s\n",str);

    length=strlen(str);
    size=sizeof(str);

    printf("Length=%d\n",length);
    printf("size=%d",size);

    return 0;



}