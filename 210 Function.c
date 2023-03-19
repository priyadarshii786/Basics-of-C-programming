        /*------from here are the examples of NO RETURN TYPE BUT ARGUMENTS------*/

                    /*----Display of integer through function----*/


#include<stdio.h>
int main()
{
    void show(int);
    int a;

    printf("Enter a number to be displayed\n");
    scanf("%d",&a);

    show(a);

    return 0;

}
void show(int x)
{
    printf("you entered %d\n",x);
}