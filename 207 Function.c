                   /*-------Working with two functions-------*/


#include<stdio.h>
int main()
{
    void show();
    void disp();
    printf("In main\n");

    show();
    disp();

    printf("Back in main\n");
    return 0;

}
void show()
{
    printf("In show function\n");
}
void disp()
{
    printf("In disp function\n");
}