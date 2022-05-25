#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/utils.h"

void burbuja(int A[], int n);

int main(void)
{
    clock_t startReal = clock();
    FILE *fp;

    clock_t startE = clock();
    int n;
    leerCantidadDeNumeros(&n);
    int *arr = leerNumeros(n);
    clock_t endE = clock();

    clock_t startCPU = clock();
    burbuja(arr,n);
    clock_t endCPU = clock();

    clock_t startS = clock();
    imprimirArreglo(arr, &n);
    clock_t endS = clock();

    free(arr);
    clock_t endReal = clock();

    imprimirTiempos(startReal, startE, startCPU, startS, endReal, endE, endCPU, endS);
    return 0;
}

void burbuja(int A[],int n)
{
    int i, j, aux;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
}
