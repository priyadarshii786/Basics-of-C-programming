/*  To print 
               abcdcba
               abc cba
               ab   ba
               a     a     */



#include<stdio.h>
int main()
{
    int rows,columns;
    char k;

    for(rows=1;rows<=4;rows++)
    {
        k='a'; /*-------hmlog isko upar initialise nahi kiye hai blki yaha pe hi initialise isliye kiye hai because new line jaise hi aaye waise hi hm chahte hai ki hr baar a print ho. And isko sirf first for loop ke andar rkhe hai--------*/

        for(columns=1;columns<=7;columns++)
        {
            if(columns<=5-rows || columns>=3+rows)
            {
                printf("%c",k);
            
                columns<4?k++:k--;

            }
            else
            {
                printf(" ");

                if(columns==4)   
/*-----------------ye likhne ka motive yahi hai ki agar columns=4 ho tb hi k ka decrement karo otherwise not or vo v ek hi baar decrement karna hai ------------------------*/
                {
                    k--;
                }

            }
        }
        printf("\n");
    }
    return 0;
}