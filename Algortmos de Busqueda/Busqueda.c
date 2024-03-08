#include "Busqueda.h"

dato *reservarMemoria(int tam){
	dato *arreglo = (dato*) malloc(sizeof(dato)*tam);
	if(arreglo == NULL){
		perror("No hay memoria papi");
		exit(-1);
	}
	return arreglo;
}

void llenarArreglo(dato *arreglo, int tam){
	
	int i;
	char j = 'A';
	srand(time(NULL));
	for (i=0; i<tam; i++)
		arreglo[i].datog.num=(rand() % 99) + 1;
        
    for (i=0; i<tam; i++ ){
    	arreglo[i].datog.let = j;
    	j++;
	}	
}

void ImprimirTDA(dato arreglo[], int tam){
	int i;
	printf("\n");
	for(i=0; i<tam; i++){
		printf("Numero: %d\n", arreglo[i].datog.num);
		printf("Letra: %c\n", arreglo[i].datog.let);
		printf("\n");
	}
}

void ImprimirUnitario(dato arreglo){
	printf("\nNumero: %d\n", arreglo.datog.num);
	printf("Letra: %c\n", arreglo.datog.let);
}

void BusquedaSecuencial(dato *arreglo, dato elementoBuscado){
	int i;
    bool flag = false;
    for(i=0; i < 5; i++){
        if(arreglo[i].datog.let == elementoBuscado.datog.let){	//Si queremos más exactitud debemos hacer dos compraraciones, el numero y la letra
            printf("El elemento se encontro en la pos %d",i);
            ImprimirUnitario(arreglo[i]);
            puts("Elemento encontrado.");
            flag=true;
            //break; este break se utiliza al oslo buscamos un elemento y requerimos solo el primer reusltado, si queremos imprimir más lo quitamos
        }
    }

    if (!flag)
        puts("Elemento no encontrado");
}

void BusquedaBinaria(dato *arreglo, dato elementoBuscado,int tam){
	int posIzq = 0;
	int posDer = tam-1;
	int pivotePos = 0;
	bool flag = false;
	
	while(posIzq<=posDer){
    	pivotePos=(posIzq+posDer)/2;
    	if(arreglo[pivotePos].datog.num == elementoBuscado.datog.num && arreglo[pivotePos].datog.let == elementoBuscado.datog.let){ //AQUI VERIFICA QUE LA ESTRUCTRUA CONNCIDAD COMPLETAMENTE, SI SOLO QUIERO UN ELEMENTO SOLO DEJO UNA CONDICOINAL
    		flag = true;
    		break;
		}
		else if(elementoBuscado.datog.num>arreglo[pivotePos].datog.num){
			posIzq = pivotePos + 1;
			pivotePos = (posIzq + posDer)/2;
		}
		else{
			posDer = pivotePos-1;
			pivotePos = (posIzq + posDer)/2;
		}
				
	}
	if(flag){
		printf("El elemento se encontro en la pos %d",pivotePos);
		ImprimirUnitario(arreglo[pivotePos]);
        puts("Elemento encontrado.");
	}
		
	else
		puts("Elemento no encontrado");
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

void inicio(){
	int tam;
	dato elementoBuscado;
	
	printf("De cuantos elementos quiere el arreglo: ");
	scanf("%d",&tam);
	
	dato *arreglo = reservarMemoria(tam);
	
	llenarArreglo(arreglo,tam);
	
	ImprimirTDA(arreglo,tam);
	
	//Ordenando arreglo en caso de que sea binario
	OrdenamientoMezcla(arreglo,tam);
	
	puts("Arreglo ordenado");
	ImprimirTDA(arreglo,tam);
	
	printf("Elementos a encontrar: ");
	scanf("%d %c",&elementoBuscado.datog.num, &elementoBuscado.datog.let);
	printf("\n\n");
	
	BusquedaBinaria(arreglo, elementoBuscado, tam);
}
