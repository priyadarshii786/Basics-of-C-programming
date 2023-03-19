#include <stdio.h>
int main()
{
    void tathagat(); /*-----------declaring the function-----------*/
    void chikku();   /*-----------declaring the function-----------*/
    void mikku();    /*-----------declaring the function-----------*/

    printf("inside main function\n");

    mikku(); /*----------calling the function-----------*/
    printf("Hero hai Hero\n");

    tathagat(); /*----------calling the function-----------*/
    printf("superhero hai superhero\n");

    chikku(); /*----------calling the function-----------*/
    printf("Kaam khtm\n");
    return 0;
}

void mikku() /*-------definition of the function-------*/
{
    printf("Hi Mikku\n");
}

void chikku() /*-------definition of the function-------*/
{
    printf("Hi Chikku\n");
}

void tathagat() /*-------definition of the function-------*/
{
    printf("Hi Tathagat\n");
}