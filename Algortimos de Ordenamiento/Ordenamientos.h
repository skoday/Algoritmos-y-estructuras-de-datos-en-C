#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct{
	
	int num;
	
} generico;

typedef struct{
	
	generico datog;
	
} dato;

void ImprimirArray(dato *arreglo, int tam);

void OrdenaminetoInsercion(dato *arreglo, int tam);

void OrdenamientoSleccion(dato *arreglo, int tam);

void OrdenamientoBurbuja(dato *arreglo, int tam);

void Ordenando(dato *ArregloI, dato *ArregloD, int tamI, int tamD, dato *arreglo);

void OrdenamientoMezcla(dato *arreglo, int tam);

void BusquedaSecuencia(dato *arreglo, int tam, int elemento);
