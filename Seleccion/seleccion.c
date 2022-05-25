#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/utils.h"

void seleccion(int A[], int n);

int main(void) {
    clock_t startReal = clock();
    clock_t startE = clock();
    int n;
    leerCantidadDeNumeros(&n);
    int *arr = leerNumeros(n);
    clock_t endE = clock();

    clock_t startCPU = clock();
    seleccion(arr,n);
    clock_t endCPU = clock();

    clock_t startS = clock();
    imprimirArreglo(arr, &n);
    clock_t endS = clock();

    free(arr);
    clock_t endReal = clock();

    imprimirTiempos(startReal, startE, startCPU, startS, endReal, endE, endCPU, endS);
    return 0;
}

void seleccion(int A[], int n)
{
    int i, p, temp, j;
    for (i = 0; i < n; i++) {
        p = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[p]) {
                p = j;
            }
        }
        temp = A[p];
        A[p] = A[i];
        A[i] = temp;
    }

}
