#include<stdio.h>
int main()
{
    int t=1;   //initialisation
    
    while(t<=10)  //test condition (it means t should be less than equal to 10)
        {
        printf("t=%d\n",t++);   //increment ya decrement in printf
        }
    return 0;
}

// first t is printed then incremented which is checked for the condition and loop continues till condition returns true.