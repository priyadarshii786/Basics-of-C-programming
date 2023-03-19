/* YAHA TO ISS TARAH KA QUESTION BANN JAA RAHA HAI IE; USER SE NO. OF ROWS MAANG KR THEN DESIRED ROWS ME * PRINT KARWANA, BUT AAGE ISS TARAH KA QUESTION BANEGA HI NAHI KI PAHLE USER SE INPUT LO, BECAUSE STEP 1 ME HAME BOX BANANA RAHTA HAI AND VO SIRF JB FIGURE GIVEN RAHEGA TB HI BANEGA. SO KISI V TARAH KA PYRAMID PRINT KARNE KE LIYE SABSE PAHLE FIGURE HONA CHAHIYE */


#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter no.of rows you want to print: "); //written this as now we want user ke according kitna bhi rows print ho
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            if(c<=b)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}