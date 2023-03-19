/*Write a program in C to store elements in an array and print it.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9*/


#include<stdio.h>
// #define s 5  <----------yaha iss header file ke bina v program run kr raha hai because niche length of array assign kiye hai---------->

int main()
{
    int a[10];
    int i;

    printf("input 10 elements in the array:\n");
    for(i=0;i<10;i++)  /*-----again dono loop same hai------*/
    {
      printf("element-:%d\n",i);
      scanf("%d",a[i]);               /*------program not running, (here is error)-------*/
    }
    printf("elements in array are:");
    for(i=0;i<10;i++)  /*----dono loop same hai----*/
    {
        printf("%d",a[i]);

    }
    printf("\n");

    return 0;
}
