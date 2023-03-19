#include <stdio.h>
int main()
{
    void bihar();
    void rajasthan();
    void Bengal();
    void Mangalore();
    void hyderabad();
    void pune();
    void gujarat();

    printf("Abhi toh room me hu\n");

    bihar();
    printf("Mai toh abhi v room pr hi hu\n");
    rajasthan();

    return 0;
}

void bihar()
{
    printf("Mai yaha se belong krta hu\n");
}
void Bengal()
{
    printf("Yaha mamta banerjee hai\n");
}
void gujarat()
{
    printf("yaha se narendra modi belong krte hai\n");
}
void rajasthan()
{
    printf("Mera room yaha ke hi college me hai\n");
    Bengal();
    gujarat();
    Mangalore();
}
void Mangalore()
{
    printf("Mai yaha rehna chahta hu\n");
}