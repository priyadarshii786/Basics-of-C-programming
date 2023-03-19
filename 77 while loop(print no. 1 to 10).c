#include<stdio.h>
int main()
{
    int t=1;   //initialise kiye hai

    while(t<=10)    //test condition lagaaye in the while loop without any semicolon
    {
        printf("t=%d\n",t);
        t++;      //increment kiye hai

    }
    return 0;
}

// pahle initialise kiye hai, and then test condition lagaye hai in the while loop, or iske baad last me increment kiye hai.
// increment ya decrement waale ko printf ke andar v rakh sakte hai and baahar v rakh sakte hai. 