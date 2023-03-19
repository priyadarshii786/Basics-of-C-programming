/*------------------Initialisation of array----------------------

Array elements are 
a[0]=10
a[1]=20
a[2]=30
a[3]=40
a[4]=50

*/

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i;

    printf("Array elements are \n");

    for(i=0;i<5;i++)   /*----hmlog pahle count kiye ki kitna elements hmlog liye hai and thenafter yaha pe 5 likhe*/
                      /*----bina count kiye hue likhne ka method next program me hai----*/
    {
        printf("a[%d]=%d\n",i,a[i]);  /*----hmlog yaha pe again a[i] likhe hai not a[s]----*/
    }

    return 0;

}