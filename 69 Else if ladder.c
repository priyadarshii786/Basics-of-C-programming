#include<stdio.h>
#include<string.h>
int main()
{
    int roll,M1,M2,M3,total,per;
    string name;

    printf("Roll no.:\t");
    scanf("%d",&roll);

    printf("name of the student:\t");
    scanf("%s",&name);

    printf("marks of Physics, chemistry and computer application:\t");
    scanf("%d%d%d",&M1,M2,M3);

    total=M1+M2+M3;
    per=total/300;

    printf("Total marks=%d",total);
    printf("Percentage=%d",per);

    if(per>=80)
    {
        printf("first");
    }
    if(per>=50 && per<80)
    {
        printf("second");

    }
    if(per>=30 && per<50)
    {
        printf("Third");

    }

    else
    {
        printf("Fail");
    }

    return 0;











}