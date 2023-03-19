#include<stdio.h>
int main()
{
    int b=0;
    if(!b)
    {
        printf("b is non zero");
    }
    return 0;
}

// In the above program if(!b) expands to if(b!=0) whose real meaning is if(x==0).
