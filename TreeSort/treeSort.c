/** 
 * @file treeSort.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 2.0
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/arbol.h"
#include "../Utils/utils.h"

void treeSort(tipo_dato[], int);

int main(void) {
  clock_t startReal = clock();

  clock_t startE = clock();
  int n;
  leerCantidadDeNumeros(&n);
  tipo_dato *arr = leerNumeros(n);
  clock_t endE = clock();

  clock_t startCPU = clock();
  treeSort(arr, n);
  clock_t endCPU = clock();

  clock_t startS = clock();
  imprimirArreglo(arr, &n);
  clock_t endS = clock();

  free(arr);

  clock_t endReal = clock();

  double realTime = (double) (endReal - startReal) / CLOCKS_PER_SEC;
  double CPUtime = (double) (endCPU - startCPU) / CLOCKS_PER_SEC;
  double EStime = (double) ((endE - startE) + (endS - startS)) / CLOCKS_PER_SEC;
  printf("Tiempo real: %lfs\n", realTime);
  printf("Tiempo CPU: %lfs\n", CPUtime);
  printf("Tiempo E/S: %lfs\n", EStime);
  printf("CPU/Wall: %lf\n", CPUtime / realTime);
  return 0;
}

void treeSort(tipo_dato arr[], int n) {
  int i, j = 0;
  ArbolBinario a = NULL;
  for (i = 0; i < n; i++) {
    a = insertar(a, arr[i]);
  }
  guardarRecorridoInOrden(a, arr, &j);
}