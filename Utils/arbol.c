/** 
 * @file arbol.c
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 1.0
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

ArbolBinario crearNodo(tipo_dato el) {
  ArbolBinario a = (ArbolBinario) malloc(sizeof(Nodo));
  a->dato = el;
  a->left = a->right = NULL;
  return a;
}

ArbolBinario insertar(ArbolBinario a, tipo_dato dato) {
  if (a == NULL) {
    a = crearNodo(dato);
  }
  if (dato < a->dato) {
    a->left = insertar(a->left, dato);
  }
  else if (dato > a->dato){
    a->right = insertar(a->right, dato);
  }
  return a;
}

void guardarRecorridoInOrden(ArbolBinario a, tipo_dato arr[], int *i) {
  if (a != NULL) {
    guardarRecorridoInOrden(a->left, arr, i);
    arr[*i] = a->dato;
    *i += 1;
    guardarRecorridoInOrden(a->right, arr, i);
  }
}