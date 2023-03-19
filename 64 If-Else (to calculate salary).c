// To calculate gross salary of the person. Given basic salary(bs) as input.If bs>5000 da=55% of bs and hra=15% of bs else da=45% of bs and hra=10% of bs.

#include<stdio.h>
int main()
{
    float bs,hra,da,gs;  //gs here represent the gross salary
    printf("Enter the Basic salary:\n");
    scanf("%f",&bs);

    if(bs>=5000)
    {
        da=(bs*55)/100;
        hra=(bs*15)/100;
    }

    else
    {
        da=(bs*45)/100;
        hra=(bs*10)/100;
    }

    gs=bs+hra+da;
    
    printf("Basic salary is %f:\n",bs);
    printf("HRA is %f:\n",hra);
    printf("DA is %f:\n",da);
    printf("Gross salary is:%f",gs);

    return 0;

}