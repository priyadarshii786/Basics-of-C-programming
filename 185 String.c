                  /*------Length of String without strlen-------*/


#include<stdio.h>
int main()
{
    char str[20];
    int i;

    printf("Enter your name\n");
    gets(str);   /*----here we have introduced gets instead of gets, because scanf breaks at the first space encountered so title of the name can't be stored in the string str-----*/

    printf("Hello %s\n",str);

    for(i=0;str[i]!=0;i++);
    {
        printf("length=%d\n",i);
    }
    return 0;
}