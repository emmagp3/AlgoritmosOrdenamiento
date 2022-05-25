#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Utils/archivos.h"
#include "../Utils/utils.h"

void insercion(int A[], int n);

int main(void) {
    clock_t startReal = clock();

    clock_t startE = clock();
    int n;
    leerCantidadDeNumeros(&n);
    int *arr = leerNumeros(n);
    clock_t endE = clock();

    clock_t startCPU = clock();
    insercion(arr,n);
    clock_t endCPU = clock();

    clock_t startS = clock();
    imprimirArreglo(arr, &n);
    clock_t endS = clock();
    free(arr);
    clock_t endReal = clock();

    imprimirTiempos(startReal, startE, startCPU, startS, endReal, endE, endCPU, endS);
    return 0;
}

void insercion(int A[], int n)
{
    int i, j,temp;
    for (i = 0; i < n; i++) {
        j = i;
        temp=A[i];
        while (( j > 0) && (temp < A[ j - 1])) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = temp;
    }
}
