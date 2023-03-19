                    // maximum of two float number using function


#include<stdio.h>
int main()
{
    void max(float,float);
    float a,b;

    printf("enter two numbers\n");
    scanf("%f%f",&a,&b);

    max(a,b);

    return 0;

}
void max(float x,float y)
{
    float t;
    t=x>y?x:y;

    printf("x=%f\ty=%f\nmax=%f",x,y,t);
}