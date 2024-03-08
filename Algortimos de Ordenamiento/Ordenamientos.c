#include "Ordenamientos.h"

void ImprimirArray(dato *arreglo, int tam){
	int i=0;
	for(i=0; i<tam; i++){
		printf("%d\t",arreglo[i]);
	}
	printf("\n");
}

void OrdenaminetoInsercion(dato *arreglo, int tam){
	
	int i,j;
	
	dato pivote;
	
	for(i=1;i<tam;i++){
		
		pivote = arreglo[i];
		
		j = i-1;	
		while(j>=0 && pivote.datog.num<arreglo[j].datog.num){
			arreglo[j+1] = arreglo[j];
			
			j--;
		}
		arreglo[j+1] = pivote;
	}
}

void OrdenamientoSleccion(dato *arreglo, int tam){
	
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

void OrdenamientoBurbuja(dato *arreglo, int tam){
	int i,j;
	
	dato pivote;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam-1;j++){
			if(arreglo[j].datog.num > arreglo[j+1].datog.num){
			pivote = arreglo[j];
			arreglo[j] = arreglo[j+1];
			arreglo[j+1] = pivote;
			}
		}	
	}
}

void Ordenando(dato *ArregloI, dato *ArregloD, int tamI, int tamD, dato *arreglo){		//La parte que ordena en mezcla
	int i=0,j=0,k=0;
    while(i<tamI && j<tamD){
        if(ArregloI[i].datog.num<ArregloD[j].datog.num){
            arreglo[k] = ArregloI[i];
            i++;
        }
        else{
            arreglo[k] = ArregloD[j];
            j++;
        }
        k++;
    }
    while(i<tamI){
        arreglo[k] = ArregloI[i];
        i++;
        k++;
    }
    while(j<tamD){
        arreglo[k]=ArregloD[j];
        j++;
        k++;
    }	
}

void OrdenamientoMezcla(dato *arreglo, int tam){
	if (tam>1){
		int mitad, i=0, j=0;
		mitad = tam/2;						//Esta operación me deja el valor mejor en la variable, ej: 9/2 = 4
		
		dato ArregloI[mitad];				//Declarando array derecho
		dato ArregloD[tam-mitad];			//Declarando array izquierod
		
		for(i=0; i<mitad; i++)
			ArregloI[i] = arreglo[i];
	
		for(i=mitad; i<tam; i++){
			ArregloD[j] = arreglo[i];
			j++;
		}
		
		OrdenamientoMezcla(ArregloI, mitad);
		OrdenamientoMezcla(ArregloD, tam-mitad);
		Ordenando(ArregloI, ArregloD, mitad, tam-mitad, arreglo);
	}
	
}

void BusquedaSecuencia(dato *arreglo, int tam, int elemento){
	int i;
	bool flag = false;
	
	for(i=0; i<tam; i++){
		if(arreglo[i].datog.num == elemento){
			printf("El elemento se encontro en la posicion %d\n",i+1);
			flag = true;
		}
		
	}
	if (!flag){
			printf("\nEl elemento no se encontro\n");
		}	
}

void Inicio(){
	
	dato arreglo[] = {5,2,11,7,4,9};
	int tam,elemento;
	tam = sizeof(arreglo)/sizeof(arreglo[0]);
	
	puts("Sin ordenar: ");
	ImprimirArray(arreglo, tam);
	

	OrdenamientoMezcla(arreglo,tam);
	
	puts("Resultado: ");
	ImprimirArray(arreglo, tam);
}
