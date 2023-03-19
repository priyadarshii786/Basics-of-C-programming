/*
Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/



#include<stdio.h>
#define s 100
int main()
{
    int i,num,arr[s];

    printf("Input the number of elements to store in the array : ");
    scanf("%d",&num);

    printf("Input %d numbers of elements in the array : \n",num);

    for(i=0;i<num;i++)   /*-----------yaha equal to operator nahi nahi lagaaye hai as hme ek km tk ka value chahiye-----------*/

    /*-------------loop hai jo num hi tk chal raha hai always-----------*/
    {
        printf("element-%d : ",i);
        scanf("%d",&arr[i]);         /*-------------hr ek element jo input krwa rhe hai usko array me store kr rhe hai-------------
        
        arr[i] ka ye mtlb hai------------------arr[0]
                                               arr[1]
                                               arr[2]
                                               arr[3]
                                               arr[4]  */
    }

    printf("The values stored in the array are :\n");

    for(i=0;i<num;i++)             /*-------------loop hai jo num hi tk chal raha hai always-----------*/
    {
        printf("%d\t",arr[i]);      /*--------------array me stored elements ko hi print krwa rhe hai. mtlb jisme store krwaaye the which is arr[i], usi ko print krwa rhe hai---------------*/
    }

    printf("\nThe values stored in the array in reverse are : \n");

    for(i=num-1;i>=0;i--)          /*--------------yahi main condition hai array ke elements ko reverse krne ka---------*/
    {
        printf("%d\t",arr[i]);
    }
    
    
    
    return 0;
}