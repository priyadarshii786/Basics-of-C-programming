#include<stdio.h>
int main()
{
    int num,c=2,pen=0;   /*----------here we have taken c=2 because c=1 will always remain true as all the natural numbers get divided by 1. And it might hinder output if introduced in if's condition---------------*/

    printf("Enter a number: \n");
    scanf("%d",&num);

    while(c<=num/2)
    {
        if(num%c==0)
        {
             pen=1;
             break;
        }
    
    c++;
    }
    if(pen!=0)
    printf("Number is not Prime\n");

    else
    printf("Number is Prime\n");

    return 0;
       

}