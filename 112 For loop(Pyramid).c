/*To print     1   
              121
             12321
            1234321  */



#include<stdio.h>
int main()
{
    int rows,columns,k; /*----------------k ka value ko yaha initialise nahi kr skte hai, usko for loop ke andar hi initialise krna padega, as tb hi baar baar new line ie; new row aane pr waapas se 1 se hi start hoga value -------------------*/


    for(rows=1;rows<=4;rows++)
    {
         k=1;/*------------hmlog isko upar initialise nahi kiye hai blki yaha pe hi initialise isliye kiye hai because new line jaise hi aaye waise hi hm chahte hai ki hr baar 1 print ho. And isko sirf first for loop ke andar rkhe hai--------------*/


        for(columns=1;columns<=7;columns++)
        {
            if(columns>=5-rows && columns<=3+rows)
            {
                printf("%d",k);
                
                columns<4?k++:k--;  /*yaha conditional operator ka use kiye hai*/
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