#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));  // Inicializa el generador de numeros aleatorios
    printf("Aleatorio: %d\n",rand());
    return 0;
}
