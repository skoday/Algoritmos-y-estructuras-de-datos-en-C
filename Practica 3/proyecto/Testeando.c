/*
Nombre: Martínez Casimiro Nestor Hugo
Grupo: 2AM1
Carrera: Lic. en Ciencia de Datos
Ultima Fecha de Modificación 08/03/2022 a las 11:30
*/

#include "Ordenamientos.h"

int main(){
	
	unsigned int pares, impares, contadorimpares = 0, contadorpares = 0;
	int i, opc;
	dato *arreglo;
	dato *arreglopares;
	dato *arregloimpares;
	
    do{
        printf("\nSeleccione la opcion que desee realizar\n");
        printf("1. Generar datos\n");
        printf("2. Separar arreglos pares e impares\n");
        printf("3. Ordenar Pares\n");
        printf("4. Ordenar Impares\n");
        printf("5. Imprimir pares\n");
        printf("6. Imprimir impares\n");
        printf("7. Salir\n\n");
        scanf("%d",&opc);
        
        switch (opc){
        
        case 1:
		arreglo = (dato*) malloc(sizeof(dato)*10000);
        NumerosAleatorios(arreglo);
        printf("Se han generado los datos\n");
            break;
		

        case 2:
        pares = ContarPares(arreglo);
        impares = 10000 - pares;
        arreglopares = (dato*) malloc(sizeof(dato)*pares);
        arregloimpares = (dato*) malloc(sizeof(dato)*impares);
        
		for(i=0;i<=10000;i++){
			if(arreglo[i].datog.num%2 == 0){
				arreglopares[contadorpares] = arreglo[i];
				contadorpares++;
			}
				
			if(arreglo[i].datog.num%2 == 1){
				arregloimpares[contadorimpares] = arreglo[i];
				contadorimpares++;
			}
				
		}
		puts("Arreglos separados");
		break;
        

        case 3:
        	OrdenamientoSeleccion(arreglopares, pares);
        	puts("Arreglo par ordenado");
            break;

        case 4:
			OrdenaminetoInsercion(arregloimpares, impares);
			puts("Arreglo impar odernado");
			break;
			
		case 5:
			puts("Pares:");
			Imprimir(arreglopares, pares);
			break;
			
		case 6:
			puts("Impares:");
			Imprimir(arregloimpares, impares);
			break;
        }
    }
    while(opc!=7);
    return 0;
}

