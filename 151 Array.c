// Input 5 elements of array and display it.
/* enter a[0] element :
10

enter a[1] element :
20

enter a[2] element :
30

enter a[3] element :
40

enter a[4] element :
50

enter a[5] element :
60
Array elements are
a[0]=10
a[1]=20
a[2]=30
a[3]=40
a[4]=50
a[5]=60  */


#include<stdio.h>
#define s 6    /*yahi se pata chalta hai ki array me kitna elements hoga*/
      /*----here we have used macro template s, which denotes size of array----*/

      /*----it is preferable to use macro when giving size of an array because later when you want to change size of the array you'll have to go to every place in the program where you used the array and change the size explicitly----*/

int main()
{
    int a[s];   /*yaha array ko initialise kiye hai*/
    int i;      /*yaha ek variable ko initialise kiye hai*/

    for(i=0;i<s;i++)  /*jo variable initialise kiye hai usi me for loop lagaye hai and condition only less than s rakhe hai equal to sign nahi introduce krna hai (that is condition less than elements of array rahe but elements of array ke equal to na rahe) */

    /*array ke for loop ke condition me kabhi equal to nahi aayega(see 154 Array.c)*/
    {
        printf("\nEnter a[%d] element : ",i);
        scanf("%d",&a[i]);

    }
    
    printf("Array elements are\n"); /*----ye loop ke baahar hai as ek hi baar print kraana hai----*/

    for(i=0;i<s;i++)  /*dono for loop me sb kuchh same hai*/
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
