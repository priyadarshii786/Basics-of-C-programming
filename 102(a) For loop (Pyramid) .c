/* to print ********
            ********
            ********  */


/* THIS CODE IS THE BASIC SKELETON FOR FORMING ANY PYRAMID  */
           
#include<stdio.h>
int main()
{
    int a,b;  //just solving the previous question by taking a,b instead of rows,columns

    for(a=1;a<=3;a++)  //pahle hamesa rows ke liye for loop likhenge
    {
        for(b=1;b<=8;b++)   //thenafter column ke liye for loop likhenge
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}