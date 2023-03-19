/*-----------Declaring constants using #define Constant_name Value-------------*/


#define PI 3.14
#define H "hello\n"   /*-------double inverted comma ke andar H ka value hai. so from here concluded that ki value kuchh v ho skta hai, ye jaroori nahi hai ki value me number hi ho---------*/
#define MC "macro constant\n"

#include<stdio.h>
int main()
{
    printf(H);
    printf(MC);
    printf("value of PI is %f",PI);

    return 0;
}