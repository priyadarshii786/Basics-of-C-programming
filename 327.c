#include <stdio.h>
int main()
{
    void serial(int, int, int);

    int jetha, mehta, popat;
    printf("enter three numbers : \n");
    scanf("%d%d%d", &jetha, &mehta, &popat);

    serial(jetha, mehta, popat);

    return 0;
}
void serial(int tappu, int gogi, int goli)
{
    int sum;
    float avg;
    printf("a=%d\tb=%d\tc=%d\n", tappu, gogi, goli);

    sum = tappu + gogi + goli;
    avg = sum / 3;

    printf("sum=%d\tavg=%f", sum, avg);
}