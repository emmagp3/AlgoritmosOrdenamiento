#include <stdio.h>
#include "utils.h"

void imprimirArreglo(tipo_dato arr[], const int* n) {
  int i;
  for (i = 0; i < *n; i++) {
    printf("%d\n", arr[i]);
  }
}

int leerCantidadDeNumeros(int* n) {
  printf("¿Cuantos numeros deseas ordenar? ");
  scanf("%d", n);
}