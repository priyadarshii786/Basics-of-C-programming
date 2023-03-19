/*---------------------DIFFERENCE IN OUTPUT -----------------------*/


#include<stdio.h>
int main()
{
    int x=10;

    printf("%d %d %d %d %d\n",--x,++x,x,x++,x--);
    return 0;

}

/* Concept:
   ----------------The output will be determined from right of printf statement-----------------
   
   statement        value of x       Explanation
    x--                10               value of x will be printed and then Decremented
    x++                09               value of x will be printed and then Incremented
    x                  10               value of x will be printed
    ++x                11               value of x will be incremented and then printed
    --x                10               value of x will be decremented and then printed
    
    so the output is -------- 10 11 10 09 10
    
    */