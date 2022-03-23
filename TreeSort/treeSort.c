#include <stdio.h>
#include <stdlib.h>
#include "../Utils/archivos.h"
#include "../Utils/arbol.h"
#include "../Utils/utils.h"

void treeSort(tipo_dato arr[], int n) {
  int i, j = 0;
  ArbolBinario a = NULL;
  for (i = 0; i < n; i++) {
    a = insertar(a, arr[i]);
  }
  guardarRecorridoInOrden(a, arr, &j);
}

int main(void) {
  int n;
  leerCantidadDeNumeros(&n);
  tipo_dato *arr = leerNumeros(n);
  treeSort(arr, n);
  imprimirArreglo(arr, &n);
  return 0;
}