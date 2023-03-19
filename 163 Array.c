/*------------To find Maximum and Minimum elements of array-----------

Enter a[0] element of array
1
Enter a[1] element of array
2
Enter a[2] element of array
3
Enter a[3] element of array
4
Enter a[4] element of array
5
Enter a[5] element of array
6
Array elements are
1       2       3       4       5       6

Max element is : 6
Min element is : 1

*/



#include<stdio.h>
#define s 6
int main()
{
    int a[s];
    int i;

    for(i=0;i<s;i++)   /*----------1st for loop---------*/
    {
        printf("Enter a[%d] element of array\n",i);
        scanf("%d",&a[i]);
    }

    printf("Array elements are\n");

    for(i=0;i<s;i++)   /*----------2nd for loop---------*/
    {
        printf("%d\t",a[i]);
    }

    int max,min;

    max=a[0];
    min=a[0];

    for(i=0;i<s;i++)    /*----------3rd for loop---------*/
    {
        if(max<a[i])   /*----concept is written in the book----*/
        {
            max=a[i];
        }

        if(min>a[i])
        {
            min=a[i];
        }
    }

    printf("\nMax element is : %d\n",max);
    printf("Min element is : %d",min);

    return 0;

}