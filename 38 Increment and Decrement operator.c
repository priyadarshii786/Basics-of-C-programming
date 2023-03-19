#include<stdio.h>
int main()
{
    int x=10,y;
    y=x++;   /*-------here it is equivalent to  y=x     
                                                x=x+1    --------*/

    printf("x=%d\n",x);
    printf("y=%d\n",y);

    return 0;
}


/*  Output: 
            from above concept 

            x=11--------step 2: thenafter x ka value increase kiye and print krwaaye
            y=10 -------step 1: pahle x ka value y me assign kiye and print krwaaye  
*/