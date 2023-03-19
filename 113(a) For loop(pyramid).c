/*  To print 
             abcdefghi
             abcd efgh
             abc   def
             ab     cd
             a       b         */



#include<stdio.h>
int main()
{
    int rows,columns;
    char k;
    for(rows=1;rows<=5;rows++)
    {
        k='a';/*------------hmlog isko upar initialise nahi kiye hai blki yaha pe hi initialise isliye kiye hai because new line jaise hi aaye waise hi hm chahte hai ki hr baar a print ho. And isko sirf first for loop ke andar rkhe hai--------------*/

        for(columns=1;columns<=9;columns++)
        {
            if(columns<=6-rows || columns>=4+rows)
            {
                printf("%c",k);
                k++;

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