                    /*----Display of integer through function----*/


#include<stdio.h>
int main()
{
    void show(int);
    int a;

    printf("Enter a number \n");
    scanf("%d",&a);

    show(a);

    printf("Number is %d\n",a);
    return 0;

}
void show(int x)
{
    printf("You entered %d\n",x);

    x=x+10;  /*-----concept is written in book------*/
             /*------Any change performed on the formal parameter does not reflect back in the actual parameters when functions are called by value ie; when value of actual parameters is send to the funtions.*/
}