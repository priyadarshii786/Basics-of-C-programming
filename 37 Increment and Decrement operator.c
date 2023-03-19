#include<stdio.h>
int main()
{
    int a=10;

    printf("Before increment a=%d\n",a);   

    a++;

    printf("After increment a=%d\n",a);   /*-----agar yaha pr printf ke andar a++ likhte hai or upar se a++ ko hta dete hai to kuchh farak nahi padega mtlb increment hi nahi hoga-----*/

    return 0;

}