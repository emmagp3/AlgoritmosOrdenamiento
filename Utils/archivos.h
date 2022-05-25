#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#define ARCHIVO "../Numeros/numeros10millones.txt"
typedef int tipo_dato;

/** 
 * Crea una arreglo de n elementos
 * 
 * @param n Cantidad a elementos a leer del archivo
 * @return Apuntador que funciona como arreglo del tipo: tipo_dato.
 * Nota: tipo_dato es definido como entero, pero puede cambiarse según las necesidades y contexto del problema a resolver. 
 */
tipo_dato* leerNumeros(int n);

#endif