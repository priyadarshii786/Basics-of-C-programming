#include<stdio.h>
int main()
{
    void sum(float,float);
    int a,b;

    printf("enter two numbers\n");
    scanf("%f%f",&a,&b);

    sum(a,b);

    return 0;

}
void sum(float x,float y)
{
    printf("x=%f\ty=%f\nsum=%f",x,y,x+y);
}