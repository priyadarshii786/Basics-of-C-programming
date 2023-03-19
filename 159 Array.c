/*--------------Counting no. of '+ve' '-ve' and 0 elements in array----------------*/

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,-50,-60,-70,0,0};
    int i;
    int positive=0,negative=0,zero=0;
    const int s=sizeof(a)/sizeof(int);

    for(i=0;i<s;i++)
    {
        if(a[i]>0)
        {
            positive+=1;
        }

        else if(a[i]<0)
        {
            negative+=1;
        }

        else
        {
            zero+=1;
        }
    }

    printf("no. of positive elements are : %d\n",positive);
    printf("no. of negative elements are : %d\n",negative);
    printf("no. of zero elements are : %d\n",zero);

    return 0;
}