/* To print ********
            ********
            ********  */


/* THIS CODE IS THE BASIC SKELETON FOR FORMING ANY PYRAMID  */

#include<stdio.h>
int main()
{
    int rows,columns;
    for(rows=1;rows<=3;rows++)
    {
        for(columns=1;columns<=8;columns++)
        {
            printf("*");
            // printf("\n");  agar hmlog yaha pe printf likhte to to hrek baar ek * print krke new line me loop jaata and aisa 8 baar tk hota
        }

         printf("\n");  /* yaha ye waala printf, pahle waale for loop ke andar hai*/
                       
                       /* basically pahle waale for loop ke andar hmlog printf matlab new line ko isliye rakhe hai kyonki ek row me 8 column(ie;*) ke print hone ke baad hme next line me jaana hai and ye chiz baar baar repeat hona chahiye that is looping me rahna chahiye */ 

    }
    return 0;
}