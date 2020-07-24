#include <stdio.h>

// Dado un arreglo, el programa determina el No. de mayor y su posición

int main() {

  int A[10] = {10,1,2,-3,-100,1000,-200,7,1,0};
  int i, mayor = 0;

  for (i=0; i<10; i++) {
    if (A[i]>A[mayor]) {
      mayor = i;
    }
  }
  printf ("Mayor: %d en la posicion: %d", A[mayor],mayor);
  return 0;
  }
