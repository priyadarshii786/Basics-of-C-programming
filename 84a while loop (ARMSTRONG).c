#include<stdio.h>
#include<math.h>
int main()
{
    int r,num,count=0,new=0,save;

    printf("Enter the number: \n");
    scanf("%d",&num);

    save=num;

    while(num!=0)
    {
        num=num/10;
        count++;
        
    }

    while(num!=0)
    {
        r=num%10;
        new=new*10+pow(r,count);
        num=num/10;

    }

    num=save;

    if(new==save)
    {
        printf("Number %d is Armstrong\n",save);
    }
    else
    {
        printf("Number %d is not Armstrong\n",save);
    }

    return 0;
}