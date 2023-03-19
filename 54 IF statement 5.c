#include<stdio.h>
int main()
{
    int a=5;
    if(a)
    {
        printf("a is non zero");
    }

    return 0;
}

// In the above program if(x) expands to if(x!=0).
// This syntax of checking a variable against non zero is used quite often.