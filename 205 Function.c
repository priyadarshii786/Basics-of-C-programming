        /*------from here are the examples of NO RETURN TYPE BUT ARGUMENTS------*/    

                      /*--------Demo of function-------*/


#include<stdio.h>
int main()
{
    void show(void);
    
    show();
    return 0;

}
void show(void)
{
    printf("Hello from show function\n");
}