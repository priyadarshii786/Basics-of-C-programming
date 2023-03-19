// Output of uninitialized Array


#include<stdio.h>
#define s 5   /*iske bina v kaam chl skta hai lekin fir hme niche length of array likhna hoga, kyonki yaha pr hm basically array ka length hi assign kr rahe hai */
int main()
{
    int a[s];   /* yaha pe hme length of array likhna hoga fir, like a[5] . see next program */
    int i;

    printf("array elements are\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",a[i]);

    }
    return 0;
}