#include<stdio.h>
int main()
{
    int x=10,y;
    y=++x;    /*-------------here it is equivalent to  x=x+1     
                                                       y=x     ----------------*/

    printf("x=%d\n",x);
    printf("y=%d\n",y);

    return 0;
}

/*--------- Output: 
            from above concept 

            x=11--------step 1: pahle x ka value increase krke usko print krwaaye
            y=11 -------step 2: thenafter uss increased value ko y me assign kiye hai-----------*/


/*  y=x++ -----------pahle x ko y me assign karo and thenafter x ka value increase karo-----------
    y=++x -----------pahle x ka value increase karo and thenafter uss increased value ko assign karo---------*/


/*-----------pre and post increment naam se hi pata chl jaata hai ki in latter(ie; post increment) increment post me hoga mtlb baad me hoga yaani pahle value assign kiya jaayega and then increment hoga but in former(ie; pre increment) me pahle increment hoga and then value assign kiya jaayega ------------*/