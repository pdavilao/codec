#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nombre[20];
  char pais[15];
} Destino;

typedef struct{
  char nombre[50];
  char apellido[50];
  int numero;
  Destino *lugarActual;
} Persona;

int main()
{
    Persona sancho;
    Destino molinos;

    // Definir destino
    strcpy(molinos.nombre, "Molinos de Viento");
    strcpy(molinos.pais, "Espana");

    // Definir persona
    sancho.numero=1234;
    strcpy(sancho.nombre, "Sancho");
    strcpy(sancho.apellido, "Panza");
    sancho.lugarActual = &molinos;

    printf("%s - %s - %s - %s \n", sancho.nombre, sancho.apellido, sancho.lugarActual->nombre, sancho.lugarActual->pais);

    return 0;
}
