#include "Libreria.h"

escuela* asignarmemoria(){
	escuela* universidad = (escuela*)malloc(cantidadSalones*sizeof(escuela));
	if(universidad == NULL){
		perror("No hay memoria suficiente");
		exit(-1);
	}
	return universidad;
}

void construirTDA(salon *recibido, biblioteca* recibida, escuela* instituto){
	int i;
	for(i=0;i<cantidadSalones;i++)
		instituto->salones[i] = recibido[i];

	i = 0;
	instituto->biblio = recibida[i];
}

void imprimirTDA(escuela universidad,int a){

	int i;

	printf("\nEscuela:");
	for(i=0;i<a;i++)
	{
		printf("\n\nSalon %d\nAncho: %.3f\tAlto: %.3f\tMesas: %d\tSillas %d",i,universidad.salones[i].ancho,universidad.salones[i].alto,universidad.salones[i].mesas,universidad.salones[i].sillas);
	}

	printf("\n\nBiblioteca:\n");
	printf("Anaqueles: %d\tSillas: %d\tComputadoras: %d\n",universidad.biblio.anaqueles,universidad.biblio.sillas,universidad.biblio.computadora);
}

void destruirTDA(escuela* instituto){
	free(instituto);
}
