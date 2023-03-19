                    /*-------Nesting of functions--------*/


#include<stdio.h>
int main()
{
    void fun1();
    void fun2();

    printf("In main\n");
    printf("going in function 1\n");

    fun1();

    printf("back in main\n");
    return 0;

}
void fun1()
{
    printf("In function 1\n");
    printf("going in function 2\n");

    fun2();     /*-----function 1 ke andar se hi function 2 ko call kr diye hai, and this is called nesting of    functions------*/

    printf("back in function 1, going back to main\n");
}
void fun2()
{
    printf("In function 2, called from function 1\n");
    printf("returning from function 2\n");

}