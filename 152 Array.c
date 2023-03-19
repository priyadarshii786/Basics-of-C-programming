/* Input 5 elements array and display it. 

enter 3 numbers
5
7
9
array elements are:
5       7       9

*/



#include<stdio.h>
#define s 3     /*yahi se pata chalta hai ki array me kitna elements hoga*/
int main()
{
    int a[s];
    int i;

    printf("enter %d numbers\n",s);  /*----yaha %d krke likhe hai, direct ye nahi likhe hai ki itna number enter karo aur #define se already pata hai ki 3 number hoga ----*/

    for(i=0;i<s;i++)  /*dono loop same hai*/
    {
        scanf("%d",&a[i]);         /* yaha user se input lene ka and use address provide krne ka kaam hua */
    }
    printf("array elements are:\n");

    for(i=0;i<s;i++)   /*dono loop same hai*/
    {
        printf("%d\t",a[i]);  /* yaha screen pe print krne ka kaam hua (grab the difference) */
    }
    return 0;

}
