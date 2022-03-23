/** 
 * @file arbol.h
 * @author Valentin Ramos Emmanuel Guadalupe (evalentinr1700@alumno.ipn.mx)
 * @version 1.0
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ARBOL_H
#define ARBOL_H
#include "archivos.h"

typedef struct nodo {
  tipo_dato dato;
  struct nodo *left, *right;
} Nodo;

typedef Nodo* ArbolBinario;

/** 
 * 
 * Crea e inicializa un árbol
 * @param tipo_dato El tipo de dato que va a contener la cabecera del arbol
 * @return Retorna un apuntador a Nodo definido como ArbolBinario
 */
ArbolBinario crearNodo(tipo_dato);
ArbolBinario insertar(ArbolBinario, tipo_dato);
void guardarRecorridoInOrden(ArbolBinario, tipo_dato[], int*);
#endif