/*   To print     
                  1   
                 111
                11111
               1111111  */



#include<stdio.h>
int main()
{
    int a,b,k;
    for(a=1;a<=4;a++)
    {

        k=1;      /*------------hmlog isko upar initialise nahi kiye hai blki yaha pe hi initialise isliye kiye hai because new line jaise hi aaye waise hi hm chahte hai ki hr baar a print ho. And isko sirf first for loop ke andar rkhe hai--------------*/


        for(b=1;b<=7;b++)
        {
            if(b>=5-a && b<=3+a)
            {
                printf("%d",k);
 
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}