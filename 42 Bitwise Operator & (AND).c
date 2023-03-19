// Bitwise operator works on bits


#include<stdio.h>
int main()
{
    int a=5,b=9,c;

    c=a&b;

    printf("c=%d",c);

    return 0;
}

/*concept:
       binary values of a=2 is 0010 and b=3 is 0011

       Bitwise AND of these two values is performed as follows:

                        0 0 1 0 
                        0 0 1 1
                       ----------
                        0 0 1 0  --------  output in c will be 2 in decimal
       
       */

