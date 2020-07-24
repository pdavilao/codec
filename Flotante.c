#include <stdio.h>
#include <math.h>

int main()
{
    #define PI 3.14159265358979323846
    float x = 180;
    double valor;
    valor = cos(x * PI/180);
    printf("Resultado: %llf\n",valor);
    return(0);
}
