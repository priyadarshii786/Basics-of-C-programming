/*Enter arr[0] element1
Enter arr[1] element2
Enter arr[2] element3
Enter arr[3] element4
Enter arr[4] element5
Enter arr[5] element6
Array elements are
1       2       3       4       5       6
number of odd elements = 3
number of even elements = 3
sum of odd elements = 9
sum of even elements = 12

*/


#include<stdio.h>
#define s 6
int main()
{
    int arr[s];
    int i;

    for(i=0;i<s;i++)   /*---------1st for loop---------*/
    {
        printf("Enter arr[%d] element",i);
        scanf("%d",&arr[i]);

    }

    printf("Array elements are\n");

    for(i=0;i<s;i++)    /*---------2nd for loop---------*/
    {
        printf("%d\t",arr[i]);   
    }

    int no_odd=0,no_even=0,sum_odd=0,sum_even=0;

    for(i=0;i<s;i++)    /*---------3rd for loop---------*/
    {
        if(arr[i]%2==0)
        {
            no_even+=1;
            sum_even+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            no_odd+=1;
            sum_odd+=arr[i];
        }
    }

    printf("\nnumber of odd elements = %d\n",no_odd);
    printf("number of even elements = %d\n",no_even);

    printf("sum of odd elements = %d\n",sum_odd);
    printf("sum of even elements = %d\n",sum_even);

    return 0;
}