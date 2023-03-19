#include<stdio.h>
int main()
{
    int orig,rev=0,r,save;

    printf("Enter the number: \n");
    scanf("%d",&orig);

    save=orig;       /*---------orig ka value save me assign kra hai, na ki equal to kra hai------------*//*-------or ha orig ka value save me assign kra hai na ki save ka value orig me-------------*/

    while(orig!=0)
    {
        r=orig%10;
        rev=rev*10+r;
        orig=orig/10;

    }

    if(rev==save)
    {
        printf("Number is Palindrome\n");

    }

    else
    {
        printf("Number is not Palindrome\n");
    }

    return 0;
}