/** 
 * @file shellSort.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 1.0
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

void shell(int[], int);

int main(void) {
  int arr[] = {100, 2, 5, 8, 99, 0};
  int n = sizeof(arr) / sizeof(int);
  shell(arr, n);

  int a;
  for (a = 0; a < n; a++) {
    printf("%d\n", arr[a]);
  }
  return 0;
}

/** 
 * Ordena un arreglo a través del algoritmo de Shell
 * @param arr Conjunto de números a ordenar en un arreglo
 * @param n Tamaño del arreglo
 */
void shell(int arr[], int n) {
  int k = floor(n / 2);

  while (k >= 1) {
    int b = 1;
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