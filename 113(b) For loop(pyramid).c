/*  To print 
               abcdcba
               abc dcb  isme or next waale me diff yahi hai ki yaha c ke baad d aa raha hai
               ab   cb
               a     b      */



#include<stdio.h>
int main()
{
    int rows,columns;
    char k;
    for(rows=1;rows<=4;rows++)
    {
        k='a';

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

            }
        }
        printf("\n");
    }
    return 0;
}