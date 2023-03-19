/*--------Instead of initializing array, we'll now take elements as input from the user--------*/

/*  Enter elements of array 
10
20 
30
-40
-50
0 
no. of positive elements are 3: 
no. of negative elements are 2:
no. of zero elements are 1:  */


#include<stdio.h>
#define s 6
int main()
{
    int a[s];
    int i;

    printf("Enter elements of array \n");

    for(i=0;i<s;i++)   /*---------1st for loop---------*/
    {
        scanf("%d",&a[i]);
    }

    int positive=0,negative=0,zero=0;

    for(i=0;i<s;i++)   /*--------2nd for loop---------*/
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

    printf("no. of positive elements are %d: \n",positive);
    printf("no. of negative elements are %d: \n",negative);
    printf("no. of zero elements are %d: \n",zero);

    return 0;
}