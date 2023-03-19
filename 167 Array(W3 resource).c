/* Write a program in C to find the sum of all elements of the array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15  */



#include<stdio.h>
#define s 100
int main()
{
    int i=0, num,sum=0,arr[s];

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&num);

    printf("Input %d elements in the array :\n",num);

    while(i<num)
    {
        printf("element-%d : ",i);
        scanf("%d",&arr[i]);
        i++;
    }

    for(i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }

    printf("sum of all elements stored in the array is %d",sum);

    return 0;
}