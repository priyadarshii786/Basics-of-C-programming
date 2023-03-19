              /*------functions with two arguments an int and char-------*/


#include<stdio.h>
int main()
{
    void show(int,char);
    int a;
    char c;

    printf("Enter an integer and a character to be displayed\n");
    scanf("%d%c",&a,&c);

    show(a,c);

    return 0;

}
void show(int x, char y)
{
    printf("a=%d\tc=%c",x,y);
}