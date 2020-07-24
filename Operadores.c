#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i=3;
    printf("i=%d\n", i);
    k = i++;
    printf("k=%d i=%d\n", k, i);

    k = ++i;
    printf("k=%d i=%d\n", k, i);

    k = i--;
    printf("k=%d i=%d\n", k, i);

    k = --i;
    printf("k=%d i=%d\n", k, i);
    return 0;
}
