/*To print left-aligned right angle triangle
           *
           **
           ***
           ****
           *****
           ******   */
          
#include<stdio.h>
int main()
{
    int rows,columns;
    
    for(rows=1;rows<=6;rows++)  // will print rows
    {
        for(columns=1;columns<=6;columns++)  // will print columns

/*---------------------------------simply above used do for loop ke use ko iss tarah v smjh skte hai ki pahla for loop chlega ie; row 1 ke liye and control transfer hoga doosre for loop me, or yaha loop chlega column 1 to column 6 ke liye--------------------------  */
        {
            if(columns<=rows)  //see below written concept
            printf("*");

            else
            printf(" ");   //for printing space

        }

        printf("\n");  //again iss waale printf that is new line print karwaane waale ko first loop that is rows waale loop ke andar rakhe hai but column waale ke baahar rakhe hai
        
    }

    return 0;

}

/* step:1  Pahle box bana lo   |*| | | | |
                               |*|*| | | |
                               |*|*|*| | |
                               |*|*|*|*| |
                               |*|*|*|*|*|  like this

 step:2  ab dekho ki kaha kaha * print karwana hai

  so,  rows   columns

        1     1
        2     1,2
        3     1,2,3        these all are basically column ka jagah jaha * print krwaana hai
        4     1,2,3,4
        5     1,2,3,4,5
to yaha yaha * print karwaana hai

step:3  smarter way me likhna hai

   rows    columns
   1        columns<=1
   2        columns<=2
   3        columns<=3
   4        columns<=4
   5        columns<=5


step:4  generalise krna hai (ie; iss tarah likhna hai ki columns and rows me relation baithe)

      Rows       Columns
      rows       columns<=rows   */


