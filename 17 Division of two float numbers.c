#include<stdio.h>
int main()
{

    float a,b,c,d;

    printf("Enter two float numbers:\n");
    scanf("%f%f",&a,&b);

    c=a/b;   /*Modulus operator and gives Quotient */
    d=a%b;   /*Remainder operator and gives remainder */
    /* It is showing error because % operator can be used only with integers and not with floats */

    printf("Quotient of %f and %f is %f\n",a,b,c);
    printf("remainder of %f and %f is %f\n",a,b,d);

    return 0;

}


//Remainder operator(%)can be used only with integers.
/* That's why here with float numbers remainder operator is not working*/
