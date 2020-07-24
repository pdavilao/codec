#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    printf("%d\n", i);
    printf("\n");

    for (i = 0; i < 10; ++i)
    {
        printf("%d\n", i);
    }
    printf("\n");
    printf("%d\n", i);
    printf("\n");
    return 0;
}


