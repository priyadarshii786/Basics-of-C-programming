                 /*-------sum of two float number using function-------*/


#include<stdio.h>
int main()
{
    void sum(float,float);
    float a,b;   /*------actual argument------*/

    printf("enter two numbers\n");
    scanf("%f%f",&a,&b);

    sum(a,b);

    return 0;
}
void sum(float x,float y)   /*------here x and y is formal argument------*/
{
    float t;  /*-------local variable-------*/

    t=x+y;
    printf("x=%f\ty=%f\nsum=%f\n",x,y,t);
}