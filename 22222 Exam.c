#include <stdio.h>
int main(){


    int num,sum=0;
    float avg;

    for(int i=1;i<=10;i++)
    {
        printf("Num %d\n", i);
        scanf("%d", &num);
        sum+=num;
    }

    avg=sum/10;

    printf("Avg:%f\t Sum:%d\n", avg, sum);
}