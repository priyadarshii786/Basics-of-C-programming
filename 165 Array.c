                   /*---------Deletion of an Array---------*/

#include<stdio.h>
#include<stdlib.h>
#define s 6
int main()
{
    int a[s]; /*-----yaha s hi likhe hai. Previous program ke jaisa total length ka jhanjhat nahi hai------*/
    int i,j,pos,num;

    for(i=0;i<s;i++)
    {
        printf("enter a[%d] element :\n",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray is :\n");

    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("Enter the position of the element you want to delete\n");
    scanf("%d",&pos);

    if(pos>=0 && pos<=9)
    {
        for(j=pos;j<s;j++)
        {
            a[j]=a[j+1];
        }
    }

    else
    {
        printf("wrong position selected\n");
        return 0;
        exit(1);
    }

    printf("\nArray after deletion\n");

    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}