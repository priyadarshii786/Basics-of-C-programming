#include <stdio.h>
int main()
{
    void jetha(float, float);
    float a, b;

    printf("enter the numbers : \n");
    scanf("%f%f", &a, &b);

    jetha(a, b);
    return 0;
}
void jetha(float tappu, float sonu)
{
    printf("the sum of %f and %f is %f", tappu, sonu, tappu + sonu);
}