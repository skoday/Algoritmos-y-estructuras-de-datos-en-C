/*
	Martínez Casimiro Nestor Hugo
	2AM1
	Licenciatura en Ciencia de Datos
	15/03/2022  a las 2:40
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char pais[50];
	char nombre[50];
	float altura;
	long long int telefono;
}Datos;

typedef struct{
	Datos Dpersonas;
} Persona;

void ImprimirTDA(Persona *personas);
void OrdenamientoSleccion(Persona *arreglo, int tam);
void OrdenaminetoInsercion(Persona *arreglo, int tam);
void Ordenando(Persona *ArregloI, Persona *ArregloD, int tamI, int tamD, Persona *arreglo);
void OrdenamientoMezcla(Persona *arreglo, int tam);
void OrdenamientoBurbuja(Persona *arreglo, int tam);
void incio();
