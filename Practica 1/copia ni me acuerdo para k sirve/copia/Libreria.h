#include <stdio.h>
#include <stdlib.h>

#define cantidadSalones 20

typedef struct{
	float ancho;
	float alto;
	int mesas;
	int sillas;
} salon;

typedef struct{
	int anaqueles;
	int sillas;
	int computadora;
} biblioteca;

typedef struct{
	salon salones[cantidadSalones];
	biblioteca biblio;
} escuela;

escuela* asignarmemoria();

void construirTDA(salon *recibido,biblioteca* recibida, escuela* instituto);

void imprimirTDA(escuela universidad,int a);

void destruirTDA(escuela* instituto);
