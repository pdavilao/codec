#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct perro
    {
        char nombre[30];
        int edadMeses;
        float peso;
    } perros[3];

//    perros[0].peso=12.5;
//    perros[0].edadMeses=12;
//    strcpy(perros[0].nombre,"Mac");
//
//    printf("Nombre: %s\n",perros[0].nombre);
//    printf("Edad: %d\n",perros[0].edadMeses);
//    printf("Peso: %.2f\n",perros[0].peso);
    for (int i=0; i<3; i++ ){
        printf("Nombre del perro: \n");
        scanf("%s",perros[i].nombre);
        printf("Edad del perro (meses): \n");
        scanf("%d",&perros[i].edadMeses);
        printf("Peso (kg): \n");
        scanf("%f",&perros[i].peso);
    }
    for (int i=0; i<3; i++ ){
        printf("No. %d\n",i+1);
        printf("Nombre del perro: %s \n",perros[i].nombre);
        printf("Edad (meses): %d \n",perros[i].edadMeses);
        printf("Peso (kg): %.2f \n",perros[i].peso);
    }
//    struct perro
//    {
//        char nombre[30];
//        int edadMeses;
//        float pesos;
//    } perro1= {"Bobby",10,3.50};
//    printf("%s es el nombre de mi mascota \n",perro1.nombre);
//    printf("Su peso: %2.2f kg y tiene %d meses",perro1.pesos, perro1.edadMeses);
    return 0;
}
