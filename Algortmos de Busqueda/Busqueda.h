#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	int num;
	char let;
} generico;

typedef struct{
	generico datog;
} dato;

dato *reservarMemoria(int a);

void llenarArreglo(dato *arreglo, int tam);

void ImprimirTDA(dato arreglo[], int tam);

void ImprimirUnitario(dato arreglo);

void BusquedaSecuencial(dato *arreglo, dato elementoBuscado);

void BusquedaBinaria(dato *arreglo, dato elementoBuscado, int tam);

void Ordenando(dato *ArregloI, dato *ArregloD, int tamI, int tamD, dato *arreglo);

void OrdenamientoMezcla(dato *arreglo, int tam);

void inicio();
