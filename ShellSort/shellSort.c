/** 
 * @file shellSort.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 3.0
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/utils.h"

void shell(int[], int);

int main(void) {
  clock_t startReal = clock();

  clock_t startE = clock();
  int n;
  leerCantidadDeNumeros(&n);
  int *arr = leerNumeros(n);
  clock_t endE = clock();
  
  clock_t startCPU = clock();
  shell(arr, n);
  clock_t endCPU = clock();

  clock_t startS = clock();
  imprimirArreglo(arr, &n);
  clock_t endS = clock();

  free(arr);

  clock_t endReal = clock();

  imprimirTiempos(startReal, startE, startCPU, startS, endReal, endE, endCPU, endS);
  return 0;
}

/** 
 * Ordena un arreglo a través del algoritmo de Shell
 * @param arr Conjunto de números a ordenar en un arreglo
 * @param n Tamaño del arreglo
 */
void shell(int arr[], int n) {
  int k = floor(n / 2);
  int b;

  while (k >= 1) {
    b = 1;
    while (b != 0) {
      b = 0;
      int i;
      for (i = k; i < n; i++) {
        if (arr[i - k] > arr[i]) {
          int temp = arr[i];
          arr[i] = arr[i - k];
          arr[i - k] = temp;
          b++;
        }
      }
    }
    k = floor(k / 2);
  }
}