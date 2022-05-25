/** 
 * @file quickSort.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 3.0
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/utils.h"

int pivot(int[], int, int);
void quickSort(int[], int, int);
void swap(int[], int, int);

int main(void) {
  clock_t startReal = clock();

  clock_t startE = clock();
  int n;
  leerCantidadDeNumeros(&n);
  int *arr = leerNumeros(n);
  clock_t endE = clock();

  clock_t startCPU = clock();
  quickSort(arr, 0, n - 1);
  clock_t endCPU = clock();

  clock_t startS = clock();
  imprimirArreglo(arr, &n);
  clock_t endS = clock();

  free(arr);

  clock_t endReal = clock();
  
  imprimirTiempos(startReal, startE, startCPU, startS, endReal, endE, endCPU, endS);
  return 0;
}

int pivot(int arr[], int p, int r) {
  int piv = arr[p], i = p + 1, j = r;
  while (i <= r) {
    while (arr[i] < piv && i <= r) {
      i++;
    }
    while (arr[j] > piv) {
      j--;
    }
    
    if (i <= j) {
      swap(arr, i, j);
    }
    else {
      swap(arr, p, j);
      return j;
    } 
  }
}

void quickSort(int arr[], int p, int r) {
  int j;
  if (p < r) {
    j = pivot(arr, p, r);
    quickSort(arr, p, j - 1);
    quickSort(arr, j + 1, r);
  }
}

void swap(int arr[], int i, int j) {
  int temp = arr[j];
  arr[j] = arr[i];
  arr[i] = temp;
}