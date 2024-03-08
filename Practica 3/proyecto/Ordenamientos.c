/*
Nombre: Martínez Casimiro Nestor Hugo
Grupo: 2AM1
Carrera: Lic. en Ciencia de Datos
Ultima Fecha de Modificación 08/03/2022 a las 11:30
*/
#include "Ordenamientos.h"

void OrdenaminetoBurbuja(dato *arreglo, int tam){
	int i,j,extra;
	
	dato pivote;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam-1;j++){
			if(arreglo[j].datog.num > arreglo[j+1].datog.num){
			extra=arreglo[j].datog.num;
			arreglo[j].datog.num=arreglo[j+1].datog.num;
			arreglo[j+1].datog.num=extra;
			}
		}	
	}
}

void OrdenaminetoInsercion(dato *arreglo, int tam){
	
	int i,j;
	
	dato pivote;
	
	for(i=1;i<tam;i++){
		
		pivote = arreglo[i];
		
		j = i-1;	
		while(j>=0 && pivote.datog.num>arreglo[j].datog.num){
			arreglo[j+1] = arreglo[j];
			
			j--;
		}
		arreglo[j+1] = pivote;
	}
}

void OrdenamientoSeleccion(dato *arreglo, int tam){
	
	int i,j;
	dato pivote;
	for(i=0;i<tam-1;i++){
		
		for(j=i+1;j<tam;j++){
			if(arreglo[i].datog.num > arreglo[j].datog.num){
				pivote = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = pivote; 	
			}
		}
	}
}

void NumerosAleatorios(dato *arreglo){
	unsigned int i;
	srand(time(NULL));
	for (i=0; i<10000; i++)
            arreglo[i].datog.num=(rand() % 459565) + 1;
}

unsigned int ContarPares(dato* arreglo){
	unsigned int a = 0, i;
	
	for(i=0;i<10000;i++){
		if(arreglo[i].datog.num%2 == 0)
			a++;
	}
	
	return a;
}

void Imprimir(dato *arreglo, unsigned int tam){
	unsigned int i;
	
	for(i=0;i<tam;i++){
		printf("%u\t",arreglo[i].datog.num);
	}
}


libro libro1[] ={
 	[0] = {"Anecdota de un dia", 8.5, 3.18, "Tiahoma Black"},
	[1] = {"Burros Blancos", 7.5, 0.74, "Agency"},
	[2] = {"Cien años y uno mas", 6.5, 0.3, "Abscissa", },
};



