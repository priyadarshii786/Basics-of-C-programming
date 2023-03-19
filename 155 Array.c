/*------------------Input 5 element array and display it----------------------

enter 5 numbers
10
20
30
40
50

Array elements are
10      20      30      40      50

*/

#include<stdio.h>
#define s 5
int main()
{
    int a[s];
    int i;

    printf("enter %d numbers\n",s); /*----yaha %d likh kr input maange hai, na ki direct "enter 5 numbers" likh kr--*/
                                    /*----aisa likhna iss liye successful raha because macro s se hme already known hai ki 5 hi elements lena hai----- */
    for(i=0;i<s;i++)
    {
      scanf("%d\t",&a[i]);   /* yaha pr a[i] likhe hai not a[s] */
    }

    printf("\nArray elements are\n");

    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}