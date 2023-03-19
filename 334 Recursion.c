#include <stdio.h>
#include <stdlib.h>
int main()
{
    static int t;
    if (t == 5)
    {
        printf("Quit");
        exit(0);
    }
    printf("Hello from Main %d\n", ++t);
    main();

    return 0;
}