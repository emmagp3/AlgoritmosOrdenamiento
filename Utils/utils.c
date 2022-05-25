#include <stdio.h>
#include "utils.h"
#include <time.h>

void imprimirArreglo(tipo_dato arr[], const int* n) {
  int i;
  printf("\n\n");
  for (i = 0; i < *n; i++) {
    printf("%d\n", arr[i]);
  }
}

int leerCantidadDeNumeros(int* n) {
  printf("¿Cuantos numeros deseas ordenar? ");
  scanf("%d", n);
}

void imprimirTiempos(clock_t startReal, clock_t startE, clock_t startCPU, clock_t startS, clock_t endReal, clock_t endE, clock_t endCPU, clock_t endS) {
  double realTime = (double) (endReal - startReal) / CLOCKS_PER_SEC;
  double CPUtime = (double) (endCPU - startCPU) / CLOCKS_PER_SEC;
  double EStime = (double) ((endE - startE) + (endS - startS)) / CLOCKS_PER_SEC;
  printf("\n\nTiempo real: %lfs\n", realTime);
  printf("\n\nTiempo CPU: %lfs\n", CPUtime);
  printf("\n\nbTiempo E/S: %lfs\n", EStime);
  printf("\n\nCPU/Wall: %lf\n", CPUtime / realTime);
}