/*
	Mart�nez Casimiro Nestor Hugo
	2AM1
	Licenciatura en Ciencia de Datos
	15/03/2022  a las 2:40
*/
#include "Libreria.h"

Persona personasInfo[] = {
{"Espana", "ESTEFANIA", 1.62, 558205580},
{"Venezuela", "QUERALT", 1.55, 556545115},
{"Peru", "JOAN", 1.6, 558202768},
{"Ecuador", "JOAN", 1.8, 558727844},
{"Guatemala", "MARC", 1.81, 558350521},
{"Cuba", "JOSEP", 1.57, 558755645},
{"Republica Dominicana", "ESTHER", 1.57, 556520547},
{"Honduras?", "LAURA", 1.72, 556565656},
{"Bolivia", "RAQUEL", 1.81, 556752156},
{"El Salvador", "JOAN", 1.62, 558300025},
{"Nicaragua", "MARIA ISABEL", 1.56, 558385567},
{"Paraguay", "ADRIA", 1.6, 557809812},
{"Costa Rica", "GERARD", 1.87, 556520741},
{"Panama", "ELIOT", 1.82, 558202456},
{"Guinea Ecuatorial", "JORDI", 1.6, 558754554},
{"Barbados", "LUIS", 1.67, 556875544},
{"Belice", "LAURA", 1.87, 555880712},
{"Botsuana", "JORDI", 1.75, 556875255},
{"Cameron", "DOUNYA", 1.73, 556542775},
{"Canada", "JULIO", 1.86, 558773545},
{"Dominica", "ANDREU", 1.79, 558200022},
{"Eritrea", "RAMON", 1.81, 556512545},
{"Filipinas?", "DAVID-JESE", 1.57, 557785655},
{"Gambia", "ARAN", 1.64, 558300385},
{"Ghana", "GEMMA", 1.69, 556520471},
{"Granada", "IVAN", 1.56, 556012445},
{"Guyana", "DAVID", 1.57, 554500611},
{"India", "XAVIER", 1.73, 557885544},
{"Irlanda", "MARIO", 1.75, 556512105},
{"Jamaica", "JESUS", 1.82, 558202200},
{"Francia", "GEMMA", 1.81, 559965585},
{"Canada", "SILVIA", 1.62, 556541235},
{"Madagascar", "ALBERT", 1.71, 558204054},
{"Camerun", "MARIA", 1.73, 556584541},
{"Ruanda", "BERTA", 1.71, 554111475},
{"Belgica", "BERTA", 1.9, 555687444},
{"Guinea", "MIREIA", 1.87, 556658711},
{"Haiti", "GEMMA", 1.89, 558773941},
{"Botsuana", "MARIA ISABEL", 1.83, 558305295},
{"Camerun", "TONI", 1.59, 556524446},
{"Canada", "ALEJANDRO", 1.78, 558305551},
{"Dominica", "JOAN MARTI", 1.72, 558206097},
{"Eritrea", "INGRID", 1.89, 554500644},
{"Filipinas?", "OLIVER", 1.66, 558305594},
{"Gambia", "SANDRA", 1.6, 558300422},
{"Guyana", "JORDI", 1.74, 558350511},
{"India", "MARC", 1.7, 558727589},
{"Irlanda", "JORDINA", 1.59, 558208488},
{"Jamaica", "MARIA JOSE", 1.87, 558320587},
{"Francia", "RAQUEL", 1.78, 558203095},
{"CanadA", "ENRIC", 1.86, 554555455},
{"Madagascar", "MARTA", 1.65, 558208502},
{"Camerun", "CARLA", 1.73, 558205245},
{"Ruanda", "MARIA NOELIA", 1.56, 558300374},
{"Belgica", "CRISTINA", 1.67, 558305576},
{"Canada", "CARLOS", 1.82, 558208614},
{"Dominica", "DAVID", 1.7, 558770077},
{"Eritrea", "CRISTIAN", 1.7, 558200713},
{"Filipinas?", "JULIO ALBERTO", 1.65, 558270685},
{"Gambia", "SERGI", 1.79, 556021048},
{"Guyana", "ALEIX", 1.7, 558773553},
{"India", "VERONICA", 1.84, 558206766},
{"Irlanda", "MARIONA", 1.81, 558305223},
{"Jamaica", "MARC", 1.81, 558325565},
{"Guatemala", "GEMMA", 1.56, 556565448},
{"Cuba", "RICARD", 1.74, 558208360},
{"Republica Dominicana", "JUAN", 1.6, 556549889},
{"Honduras?", "MARTA", 1.73, 558208677},
{"Bolivia", "NATALIA", 1.86, 558325558},
{"El Salvador", "MARTA", 1.88, 558360281},
{"Nicaragua", "LAURA", 1.89, 558208380},
{"Paraguay", "JOAN", 1.83, 558770878},
{"Costa Rica", "ALEXIA", 1.67, 556874511},
{"Panama", "FERRAN", 1.81, 556548745},
{"Guinea Ecuatorial", "CRISTINA", 1.74, 558755512},
{"Guyana", "JOSE ANTONIO", 1.59, 558722096},
{"India", "JORDI", 1.85, 554512544},
{"Irlanda", "BEGONYA", 1.8, 558205011},
{"Jamaica", "INGRID", 1.82, 558300864},
{"Guatemala", "MIQUEL", 1.64, 553256844},
{"Cuba", "AGUSTO", 1.59, 556528779},
{"Republica Dominicana", "ANTONI", 1.84, 551021886},
{"Honduras?", "JOAN", 1.71, 556201457},
{"Bolivia", "MONICA", 1.86, 558207515},
{"Jamaica", "GERARD", 1.84, 558208558},
{"Francia", "GEMMA", 1.76, 558300496},
{"Canada", "MARIA", 1.77, 550120545},
{"Madagascar", "ORIOL", 1.7, 558207095},
{"Camerun", "VIRGINIA", 1.82, 558300214},
{"Ruanda", "DAMIA", 1.64, 558727244},
{"Belgica", "VALENTI", 1.65, 556565874},
{"Guinea", "AINA", 1.75, 558205782},
{"Haiti", "DAVID", 1.73, 558305551},
{"Botsuana", "GERARD", 1.72, 556577225},
{"Camerun", "MARTA", 1.72, 558773647},
{"Canada", "MIREIA", 1.57, 558208054},
{"Dominica", "ELOI", 1.61, 558208054},
{"Jamaica", "ANNA", 1.84, 550712563},
{"Guatemala", "ALBA", 1.57, 558204078},
{"Cuba", "SANDRA", 1.61, 556871045},
{"Republica Dominicana", "ERIC", 1.68, 558745211},
{"Honduras?", "LLUIS", 1.75, 558300065},
{"Bolivia", "CRISTIAN", 1.63, 558208674},
{"Jamaica", "GUILLEM", 1.87, 550214054},
{"Francia", "DIMAS", 1.61, 556521404},
{"Canada", "ANA INES", 1.82, 558350555},
{"Madagascar", "IVET", 1.55, 559962045},
{"Camerun", "JULIA", 1.59, 558755603},
{"Madagascar", "DANIEL", 1.6, 558305524},
{"Camerun", "ABEL", 1.89, 556571974},
{"Ruanda", "IRENE", 1.66, 558300036},
{"Belgica", "ADRIA", 1.84, 556505455},
{"Guinea", "JAIRO", 1.78, 556587454},
{"Haiti", "CRISTINA", 1.86, 558725845},
{"Botsuana", "DAVID", 1.83, 558205730},
{"Camerun", "ADRIA", 1.71, 556828258},
{"Canada", "LUCIA", 1.58, 558300045},
{"Dominica", "CARLA", 1.55, 556521452},
{"Guinea", "ADRIA", 1.58, 558725885},
{"Haiti", "MARTA", 1.77, 558208303},
{"Botsuana", "MARC", 1.58, 558360213},
{"Camerun", "ALEX", 1.65, 558320537}
};

void ImprimirTDA(Persona *personas){
	int i;
	
	for(i=0; i<122; i++){
		printf("Persona %d:\n", i+1);
		printf("Pais: %s\n", personas[i].Dpersonas.pais);
		printf("Nombre: %s\n", personas[i].Dpersonas.nombre);
		printf("Altura: %.2f\n", personas[i].Dpersonas.altura);
		printf("Telefono: %lld\n", personas[i].Dpersonas.telefono);
		printf("\n\n");
	}
}

void OrdenamientoSleccion(Persona *arreglo, int tam){
	
	int i,j;
	Persona pivote;
	for(i=0;i<tam-1;i++){
		
		for(j=i+1;j<tam;j++){
			if(arreglo[i].Dpersonas.altura > arreglo[j].Dpersonas.altura){
				pivote = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = pivote; 	
			}
		}
	}
}

void OrdenaminetoInsercion(Persona *arreglo, int tam){
	
	int i,j;
	
	Persona pivote;
	
	for(i=1;i<tam;i++){
		
		pivote = arreglo[i];
		
		j = i-1;	
		while(j>=0 && pivote.Dpersonas.pais[0] < arreglo[j].Dpersonas.pais[0]){
			arreglo[j+1] = arreglo[j];
			
			j--;
		}
		arreglo[j+1] = pivote;
	}
}

void Ordenando(Persona *ArregloI, Persona *ArregloD, int tamI, int tamD, Persona *arreglo){		//La parte que ordena de mezcla
	int i=0,j=0,k=0;
    while(i<tamI && j<tamD){
        if(ArregloI[i].Dpersonas.nombre[1]<ArregloD[j].Dpersonas.nombre[1]){
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

void OrdenamientoMezcla(Persona *arreglo, int tam){
	if (tam>1){
		int mitad, i=0, j=0;
		mitad = tam/2;						//Esta operaci�n me deja el valor mejor en la variable, ej: 9/2 = 4
		
		Persona ArregloI[mitad];				//Declarando array derecho
		Persona ArregloD[tam-mitad];			//Declarando array izquierod
		
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

void OrdenamientoBurbuja(Persona *arreglo, int tam){
	int i,j;
	
	Persona pivote;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam-1;j++){
			if(arreglo[j].Dpersonas.telefono > arreglo[j+1].Dpersonas.telefono){
			pivote = arreglo[j];
			arreglo[j] = arreglo[j+1];
			arreglo[j+1] = pivote;
			}
		}	
	}
}

void inicio(){
	int opc = 1;
	while(opc < 6){
	
	puts("1. Imprimir lista (La priemra vez se hace en desorden)");			//LISTO
	puts("2. Ordenar lista de personas por Altura");						//LISTO
	puts("3. Ordenar lista de personas por la segunda letra del nombre");	//LISTO
	puts("4. Ordenar lista de personas por numero de telefono");			//LISTO
	puts("5. Ordenar lista de personas por pais de origen");				//LISTO
	puts("6. Para todo N != [1,2,3,4,5] es salir");
	
	printf("Elija opcion: ");
	scanf("%d",&opc);
	printf("\n");

	switch (opc)
	{
	case 1:
		ImprimirTDA(personasInfo);
		break;
		
	case 2:
		OrdenamientoSleccion(personasInfo,122);
		break;
		
	case 3:
		OrdenamientoMezcla(personasInfo,122);
		break;
		
	case 4:
		OrdenamientoBurbuja(personasInfo,122);
		break;
		
	case 5:
		OrdenaminetoInsercion(personasInfo,122);
		break;
	}
	}
}
