#include<stdio.h>
int main()
{
    int a;
    for(a=5;a!=0;a--)   //condition ye bolna chah raha hai ki jb tak a not equal to zero means 5,4,3,...ho, tb tak program run hote rahe and jaise hi condition false ho ie; a=0 ho, to loop se baahar aa jaaye.
    
    {
        printf("%d\t",a);
        
    }
    return 0;
}