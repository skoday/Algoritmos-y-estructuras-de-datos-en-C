/*
Nombre: Martínez Casimiro Nestor Hugo
Grupo: 2AM1
Carrera: Lic. en Ciencia de Datos
Ultima Fecha de Modificación 08/03/2022 a las 11:30
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  char titulo[60];
  float alto;
  float ancho;
  char fuente[60];
} hoja;

typedef struct{
	hoja hojas;
} libro;


typedef struct{
	
	unsigned int num;
	
} generico;

typedef struct{
	
	generico datog;
	
} dato;


void OrdenaminetoInsercion(dato *arreglo, int tam);

void OrdenamientoSeleccion(dato *arreglo, int tam);

void OrdenamientoBurbuja(dato *arreglo, int tam);

void NumerosAleatorios(dato *arreglo);

unsigned int ContarPares(dato* arreglo);

void Imprimir(dato *arreglo, unsigned int tam);



