/*--------Declaring constant using enum ie; enum my_const    
                                            {
                                                min;
                                                mid; 
                                                max;
                                            };                                */


#include<stdio.h>
int main()
{
    enum colors
    {
        red,green,blue
    };

    enum os
    {
        dos=1,linux,windows=5,unix
    };

    printf("red=%d\tgreen=%d\tblue=%d\n",red,green,blue);
    printf("dos=%d\tlinux=%d\twindows=%d\tunix=%d",dos,linux,windows,unix);

    return 0;
}