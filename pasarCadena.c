#include <stdio.h>
#include <stdlib.h>

void pasar_cadena(char* cadena1){
  printf("Cadena: %s\n",cadena1);
  printf("Caracter: %c\n",cadena1[0]);
  printf("Caracter: %c\n",cadena1[1]);
  printf("Caracter: %c\n",cadena1[2]);
  printf("Caracter: %c\n",cadena1[3]);
}

int main(){
   char cadena1[10] = "Hola";
   pasar_cadena(cadena1);
   return 0;
}


