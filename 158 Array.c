/*---------------Accessing elements beyond boundary------------------

Array elements are
a[0]=10
a[1]=20
a[2]=30
a[3]=40
a[4]=50
a[5]=0
a[6]=0
a[7]=0

*/

#include<stdio.h>
int main()   /*-----Again yaha pr hmlog #define s ka use iss liye nahi kr rahe hai because no. of elements hmlogo ko
                yaha se pata chl raha hai-----*/
{
    int a[8]={10,20,30,40,50};  /* here subscript me size of array (ya number of elements in array) 8 likhe hai 
                                   but on the other hand initialize keval 5 ko kiye hai */

                                /*------ab output kya aayega yahi dekhna hai------*/   
    int i;
    const int s=sizeof(a)/sizeof(int);

    printf("Array elements are\n");
    for(i=0;i<s;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}