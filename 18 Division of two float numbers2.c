#include<stdio.h>
int main()
{

    float a,b;

    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);


    printf("Quotient of %f and %f is %f",a,b,a/b);
    printf("remainder of %f and %f is %f",a,b,a%b);    /* It is showing error because % operator can be used only with integers and not with floats */

    return 0;

}

/* again here also remainder operator will not work in presence of float numbers */