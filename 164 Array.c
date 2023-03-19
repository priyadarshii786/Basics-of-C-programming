                     /*---------Insertion into array---------*/



#include<stdio.h>
#include <stdlib.h>     /*-----because we have used exit(1) in the last------*/

#define s 6 /*-----hmlog do jagah array ke size ko define kiye hai-----*//*------Let say, upar waala------*/
int main()
{
    int  a[10];  /*------Let say, niche waala-----*/
    
    /*--------upar se or yaha se ye pata chl raha hai ki, yaha hmlog 10 elements ke array ko DEFINE kiye hai lekin usme abhi only 6 elements STORE kr rahe hai. Means upar waala exact storage/occupancy batata hai and niche waala total length of array batata hai---------*/

    /*--------simply, initial size of the array a is 10 but we are storing only 6 elements in it.--------- */

    int i,j,pos,num;

    for(i=0;i<s;i++)
    {
        printf("Enter a[%d] element :\n",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray is \n\n");

    for(i=0;i<s;i++)
    {
        printf("%5d",a[i]);   /*-----%5d ka matlab simply 5 baar space provide krna hai-----*/
    }

    printf("\n\nEnter the element which you want to insert\n");
    scanf("%d",&num);

    printf("Enter the position \n");
    scanf("%d",&pos);

    if(pos>=0 && pos<=9)
    {
        for(j=s;j>pos;j--)    /*-----see book, page 5.13------*/
        {
            a[j]=a[j-1];         /*------not effective-----*/
            a[j]=num;
        }
    }

    else
    {
        printf("wrong position entered\n");
        exit(1);
    }

    printf("Array after insertion :\n");

    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
    
}