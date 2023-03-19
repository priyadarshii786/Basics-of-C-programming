                     /*--------Demo of function-------*/


#include<stdio.h>
int main()
{
    void show(void);
    printf("In main\n");

    show();

    printf("Back in main\n");
    return 0;

}
void show(void)
{
    printf("In show function\n");
}