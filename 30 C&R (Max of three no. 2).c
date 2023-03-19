#include<stdio.h>
int main()
{
    int a,b,c,max;
    
    printf("Enter three integer numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b)?(a>c?a:c):(b>c?b:c);

    printf("Max of %d,%d and %d is %d",a,b,c,max);

    return 0;

}


// Pahle a and b ko check kiya ki kon greater hai, and thenafter agar a greater hai to first brackett me enter karenge otherwise second brackett me enter karenge.

// Ab first brackett ke liye a and b pahle hi check ho gaya hai and ye bhi pata chal gaya hai ki a greater hai, that's why now a and c ke beech check karenge.

// Ab second brackett ke liye bhi a and b pahle hi check ho gaya hai and ye bhi pata chal chuka hai ki b greater hai, that's why now b and c ke beech check karenge.
