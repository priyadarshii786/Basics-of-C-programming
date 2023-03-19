/*--------------------Initialization of array (2nd method)------------------------

Array elements are 
a[0]=10
a[1]=20
a[2]=30
a[3]=40
a[4]=50

*/

#include<stdio.h>
int main()    /*-----yaha pr hmlog #define s ka use iss liye nahi kr rahe hai because no. of elements hmlogo ko
                yaha se pata chl raha hai-----*/
{                                                  
    int a[]={10,20,30,40,50};                                 
    int i;                                           
    const int s=sizeof(a)/sizeof(int);  /*----by writing this, we are basically determining the number of elements 
                                        in the array (ie;size of array) and storing it into a constant s ----*/

    printf("Array elements are \n");

    for(i=0;i<s;i++)   /*----yaha pr for loop ke andar hmlog count krke 5 nahi likhe hai instead we have written s,
    jo ki upar me array ke size (or can say, elements) ko determine kr raha hai---- */
    {
        printf("a[%d]=%d\n",i,a[i]);     /*----hmlog yaha pe again a[i] likhe hai not a[s]----*/
    }

    return 0;
}