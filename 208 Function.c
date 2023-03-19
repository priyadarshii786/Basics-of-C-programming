/*-------Working with three Functions--------*/


#include<stdio.h>
int main()
{
    void fun1();
    void fun2();
    void fun3();

    printf("In main\n");
    printf("Going in function 1\n");

    fun1();
    fun2();
    fun3();

    printf("back in main\n");
    return 0;


}
void fun1()
{
    printf("In fun1 function\n");
}
void fun2()
{
    printf("In fun2 function\n");
}
void fun3()
{
    printf("In fun3 function\n");
}