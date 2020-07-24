#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alfabeto[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p;
    p=&alfabeto[0];
    printf("%s\n",p);

    // Dirección de memoria hexadecimal
    printf("%x\n",&p);
    return 0;
}
