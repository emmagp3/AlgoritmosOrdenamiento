/** 
 * @file archivos.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 1.0
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "archivos.h"

/** 
 * Crea una arreglo de n elementos
 * 
 * @param n Cantidad a elementos a leer del archivo
 * @return Apuntador que funciona como arreglo del tipo: tipo_dato.
 * Nota: tipo_dato es definido como entero, pero puede cambiarse según las necesidades y contexto del problema a resolver. 
 */
tipo_dato* leerNumeros(int n) {
  FILE *fp;
  int i = 0, numero, *arr;

  arr = (tipo_dato *) malloc(sizeof(tipo_dato) * n);
  fp = fopen(ARCHIVO, "r+");

  if (fp == NULL) {
    fp = fopen(ARCHIVO, "w+");
  }
  else {
    fclose(fp);
    fp = fopen(ARCHIVO, "a+");
    while(!feof(fp) && (i < n)) {
      fscanf(fp, "%d", &numero);
      arr[i] = numero;
      i++;
    }
  }
  fflush(fp);
  fclose(fp);
  return arr;
}