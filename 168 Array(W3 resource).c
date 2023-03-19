/*
Write a program in C to copy the elements of one array into another array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

#include <stdio.h>
#define s 100
int main()
{
    int i, num, arr1[s], arr2[s];

    printf("input the number of elements to be stored in the array : ");
    scanf("%d", &num);

    printf("input %d elements in the array : \n", num);

    for(i=0;i<num;i++)     /*---------1st loop----------*/
    {
        printf("element-%d : ",i);
        scanf("%d",&arr1[i]);
    }

    printf("the elements stored in the first array are : \n");

    for(i=0;i<num;i++)    /*---------2nd loop------------*/
    {
        printf("%d\t",arr1[i]);
    }

    printf("\nThe elements copied into the second array are :\n");

    for(i=0;i<num;i++)    /*----------3rd loop------------*/
    {
        arr2[i]=arr1[i];

    }
    for(i=0;i<num;i++)     /*-----------4th loop-----------*/
    {
        printf("%d\t",arr2[i]);
    }

    return 0;
    
}