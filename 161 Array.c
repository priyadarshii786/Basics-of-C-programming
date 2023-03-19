/*Enter a[0] element : 
1
Enter a[1] element : 
2 
Enter a[2] element : 
3
Enter a[3] element : 
4
Enter a[4] element : 
5
Enter a[5] element : 
6
Array elements are : 
1       2       3       4       5       6
Even elements
2       4       6
Odd elements
1       3       5

*/


#include<stdio.h>
#define s 6
int main()
{
    int a[s];
    int i;

    for(i=0;i<s;i++)   /*-----------1st loop-----------*/
    {
        printf("Enter a[%d] element : \n",i);
        scanf("%d",&a[i]);
    }
    
    printf("Array elements are : \n");
    
    for(i=0;i<s;i++)   /*----------2nd loop-----------*/
    {
        printf("%d\t",a[i]);
    }

    printf("\nEven elements\n");

    for(i=0;i<s;i++)    /*---------3rd loop----------*/
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }

    }

    printf("\nOdd elements\n");

    for(i=0;i<s;i++)    /*---------4th loop----------*/
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    
    return  0;
}
